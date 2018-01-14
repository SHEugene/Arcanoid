#include "StdAfx.h"
#include "LevelSelect.h"
using namespace arkanoid;

//иницилизирует класс ракетки и отображает ее на экране
void LevelSelect::initBat()
{
	bat = new Bat(field->Width);

	batPict = gcnew PictureBox;
	batPict->Location = Point(bat->batX(), bat->batY());
	batPict->Width = bat->batWidth();
	batPict->Height = bat->batHeight();
	batPict->BackColor = Color::Transparent;
	batPict->Image = Image::FromFile("Images/batN.png");
	field->Controls->Add(batPict);
}

//иницилизирует класс м€чика и отображает его на экране
void LevelSelect::initBall()
{
	ball = new Ball(field->Width, bat->batY());
	ballPict = gcnew PictureBox;
	ballPict->Location = Point(ball->ballX(), ball->ballY());
	ballPict->Width = ball->ballSize();
	ballPict->Height = ball->ballSize();
	ballPict->BackColor = Color::Transparent;
	ballPict->Image = Image::FromFile("Images/ball.png");
	field->Controls->Add(ballPict);
}

//отбражвет указанный пикчерЅокс в заданной точке
void LevelSelect::moveObject(int x, int y, PictureBox^ pb)
{
	pb->Location = Point(x, y);
}

//прорисовка заданного уровн€ на экране
void LevelSelect::drawField(int number)
{
	if (number <= LEVELS)
	{
		number--;
		rows = levels[number].rowsNumber();
		int x = 0;
		int y = 0;
		pictureBoxs = gcnew array<PictureBox^>(rows*COLUMNS);
		for (int i = 0; i < rows; i++)
		{
			string a = levels[number][i];
			for (int j = 0; j < COLUMNS; j++)
			{	
				pictureBoxs[i*COLUMNS+j] = gcnew PictureBox;
				pictureBoxs[i*COLUMNS+j]->Location = Point(x, y);
				pictureBoxs[i*COLUMNS+j]->Width = 38;
				pictureBoxs[i*COLUMNS+j]->Height = 15;
				
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
				default:
					break;
				}
				field->Controls->Add(pictureBoxs[i*COLUMNS+j]);
				x+= 38;
			}
			y += 15;
			x = 0;
		}		
	}
}