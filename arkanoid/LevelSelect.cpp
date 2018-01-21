#include "StdAfx.h"
#include "LevelSelect.h"
#include "UName.h"
#include "Result.h"
using namespace arkanoid;

//иницилизирует метку с количеством жизни
void LevelSelect::initLifeLabel()
{
	lLifes = gcnew Label;
	lLifes->Left = 0;
	lLifes->Top = 420;
	lLifes->Size = lLife->Size;
	lLifes->Font = lLife->Font;
	lLifes->ForeColor = lLife->ForeColor;
	lLifes->BackColor = Color::Transparent;
	field->Controls->Add(lLifes);
}

//иницилизирует картинку ракетки и отображает ее на экране
void LevelSelect::initBat()
{
	batPict = gcnew PictureBox;
	batPict->Location = Point(game->batX(), game->batY());
	batPict->Width = game->batWidth();
	batPict->Height = game->batHeight();
	batPict->BackColor = Color::Transparent;
	batPict->Image = Image::FromFile("Images/batN.png");
	field->Controls->Add(batPict);
}

//иницилизирует картинку мячика и отображает его на экране
void LevelSelect::initBall()
{
	ballPict = gcnew PictureBox;
	ballPict->Location = Point(game->ballX(), game->ballY());
	ballPict->Width = game->ballSize();
	ballPict->Height = game->ballSize();
	ballPict->BackColor = Color::Transparent;
	ballPict->Image = Image::FromFile("Images/ball.png");
	field->Controls->Add(ballPict);
}

//привести игру в игровое состояние
void LevelSelect::startGameElem()
{
	lscore->Text = System::Convert::ToString(game->getScore());
	lPause->Visible = true;
	lLifes->Visible = true;
	lLifes->Text =  ("Жизней: ")+System::Convert::ToString(game->gLifes());
	//скрыть ненужные элементы управления
	pLeft->Visible = false;
	pRight->Visible = false;
	level->Visible = false;
	start->Visible = false;	
}

//привести игру в начальное неигровое состояние
void LevelSelect::startElem()
{
	this->Text = "Выбор уровня";
	lLifes->Visible = false;
	lPause->Visible = false;
	lscore->Text = "0000";
	lTime->Text = "00:00"; 
	pLeft->Visible = true;
	pRight->Visible = true;
	level->Visible = true;
	start->Visible = true;	
	drawField(levels[0]);
}

//начать сохраненнцю игру
void LevelSelect::contGame(System::Object^  sender, System::EventArgs^  e)
{
	onGame = true;
	game = new Game();
	levelN = game->level()+1;
	initBat();
	initBall();
	this->Text = "Уровень "+System::Convert::ToString(levelN);
	gameTime_Tick(sender, e);
	drawField(game->getField());
	startGameElem();
}

//отбражвет указанный пикчерБокс в заданной точке
void LevelSelect::moveObject(int x, int y, PictureBox^ pb)
{
	pb->Location = Point(x, y);
}

//прорисовка заданного уровня на экране
void LevelSelect::drawField(Field f)
{
	rows = f.rowsNumber();
	int x = 0;
	int y = 0;
	pictureBoxs = gcnew array<PictureBox^>(rows*COLUMNS);
	for (int i = 0; i < rows; i++)
	{
		string a = f[i];
		for (int j = 0; j < COLUMNS; j++)
		{	
			pictureBoxs[i*COLUMNS+j] = gcnew PictureBox;
			pictureBoxs[i*COLUMNS+j]->Location = Point(x, y);
			pictureBoxs[i*COLUMNS+j]->Width = BLOCK_WIDTH;
			pictureBoxs[i*COLUMNS+j]->Height = BLOCK_HEIGHT;
				
			switch (a[j])
			{
			case '0':						
				pictureBoxs[i*COLUMNS+j]->BackColor = Color::Transparent;
				break;
			case 'R':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/R.png");
				break;
			case 'G':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/G.png");
				break;
			case 'B':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/B.png");
				break;
			case 'Y':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/Y.png");
				break;
			case 'A':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/A.png");
				break;
			case 'O':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/O.png");
				break;
			case 'D':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/A.png");
				break;
			case 'C':
				pictureBoxs[i*COLUMNS+j]->Image = Image::FromFile("Images/O.png");
				break;
			default:
				break;
			}
			if (a[j] != '0') field->Controls->Add(pictureBoxs[i*COLUMNS+j]);
			x+= BLOCK_WIDTH;
		}
		y += BLOCK_HEIGHT;
		x = 0;
	}
}

//отображение времени от начала игры
System::Void LevelSelect::gameTime_Tick(System::Object^  sender, System::EventArgs^  e)
{
	game->gTime()++;
	int minutes = game->gTime()/60;
	int seconds = game->gTime()%60;
	lTime->Text =  ((minutes < 10) ? "0" : "")+System::Convert::ToString(minutes)+":"+((seconds < 10) ? "0" : "")+System::Convert::ToString(seconds);
}

//обеспечение передвижния мяча
System::Void LevelSelect::ballTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	bool ended = false;
	//тестируем на столкновение
	int colType = game->testCollision();
	if (colType == BALL_FALL) //мяч упал
	{ 
		//поставить на паузу
		pause_Click(sender, e);	
		lFall->Visible = true;
		//передвинкть ракетку в исходное состояние
		moveObject(game->batX(), game->batY(), batPict);
		//если игра не проиграна
		if (!game->gameLose())
		{
			lLifes->Text =  ("Жизней: ")+System::Convert::ToString(game->gLifes());
		}
		else //если проиграна
		{
			ended = true;
			loseActions(sender, e); //выполнить дествия
		}	
	}
	else if (colType == BLOCK_BIT) //мяч сбил блок
	{
		if (game->getBonus() == LIFE_BONUS) //получен бонус +жизнь
		{
			lLifes->Text =  ("Жизней: ")+System::Convert::ToString(game->gLifes());
		}

		vector<int> blocks = game->getBitedBlocks();
		if (blocks.size())
		{
			for (int i = 0; i < blocks.size(); i+=2)
			{   //скрыть сбитые блоки
				pictureBoxs[blocks[i]*COLUMNS+blocks[i+1]]->Visible = false;
			}
			//обновить очки
			lscore->Text = System::Convert::ToString(game->getScore());
		
			//выполнить дествия, если победа
			if(game->gameOver())
			{
				pause_Click(sender, e);
				victoriActions();
				ended = true;
			}
		}
	}
	if (!ended) moveObject(game->ballX(), game->ballY(), ballPict);
}

//выполнение дейстыий после окончания игры
void LevelSelect::endedGame()
{
	lPause->Visible = false;
	onGame = false;
	delete ballPict;
	delete batPict;				
	delete game;
}

//проверка результата игры
void LevelSelect::checkResult()
{
	Result *res = new Result(game->level());
	//если результат хороший
	if (res->isRecord(game->gTime()))
	{
		//попросить имя
		UName ^name = gcnew UName(game->gTime(), res);
		name->ShowDialog();
	}
	delete res;
}

//выполнение дейстыий после победы
void LevelSelect::victoriActions()
{			
	checkResult();	
	endedGame();	
	System::Windows::Forms::DialogResult result;		
	result = MessageBox::Show(this, "Поздравляемы, Вы выиграли! \nВыбрать новый уровень?", "Победа!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	//если пользователь хочет выбрать новый уровень
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i]; //удалить старые
		startElem(); //привести поле в состояние выбора уровня
	}
	else toMainManu(); //вернуться в главное меню
}

//выполнение дейстыий после проигрыша
void LevelSelect::loseActions(System::Object^  sender, System::EventArgs^  e)
{
	endedGame();
	System::Windows::Forms::DialogResult result;		
	result = MessageBox::Show(this, "К сожалению, Вы проиграли.\nНачать заново?", "Проигрыш", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	//если пользователь хочет переиграть
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i]; //удалить старые
		drawField(levels[levelN-1]); //рисуем новые
		start_Click(sender, e); //начать
	}
	else toMainManu();
}

//обработчик события при нажатия на определенные клавиши
System::Void LevelSelect::LevelSelect_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{
	switch (e->KeyCode)
	{
	//пробелл - остановить или продолжить игру
	case Keys::Space:
		pause_Click(sender, e);
		break;
	//стрелка влево - если не нажата пауза - передвинуть ракетку влево
	case Keys::Left:
		if (isPlaying) 
		{
			game->moveBatLeft();			
			moveObject(game->batX(), game->batY(), batPict); //прорисовать в новом месте
		}
		if (!onGame && isNew && pLeft->Visible)
		{
			pLeft_Click(sender, e);
		}
		break;
	//стрелка вправо - если не нажата пауза - передвинуть ракетку вправо
	case Keys::Right:
		if (isPlaying) 
		{
			game->moveBatRight();			
			moveObject(game->batX(), game->batY(), batPict); //прорисовать в новом месте
		}
		if (!onGame && isNew && pRight->Visible)
		{
			pRight_Click(sender, e);
		}
		break;
	default:
		break;
	}
}

//вернуться в гланое меню
void LevelSelect::toMainManu()
{
	mainForm->Show();
	this->Hide();
}