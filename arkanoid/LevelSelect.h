#pragma once
#include "Form1.h"
#include <vector>
#include <stdlib.h>     /* strtod */
#include <Windows.h>
#include <string>
#include <fstream>
#include <list>
#include "Field.h"
#include "Game.h"
using namespace std;

namespace arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для LevelSelect
	/// </summary>
	public ref class LevelSelect : public System::Windows::Forms::Form
	{
	private:
	Form1^ mainForm;
	bool isNew;
	public:
		LevelSelect (void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	LevelSelect (Form1^ form, bool _isNew)
		{
			InitializeComponent();
			mainForm = form;
			isNew = _isNew;
		}
  

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LevelSelect()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::PictureBox^  field;
	private: System::Windows::Forms::Label^  level;
	private: System::Windows::Forms::Label^  start;


	private: System::Windows::Forms::PictureBox^  pLeft;
	private: System::Windows::Forms::PictureBox^  pRight;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  manu;
	private: System::Windows::Forms::Label^  lTime;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  save;
	private: System::Windows::Forms::Label^  lscore;


	private: System::Windows::Forms::Label^  pause;
	private: System::Windows::Forms::Label^  lPause;
	private: System::Windows::Forms::Timer^  gameTime;
	private: System::Windows::Forms::Timer^  ballTimer;
	private: System::Windows::Forms::Label^  lFall;
	private: System::Windows::Forms::Label^  lLife;




	private: System::ComponentModel::IContainer^  components;






	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelSelect::typeid));
			this->field = (gcnew System::Windows::Forms::PictureBox());
			this->level = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->pLeft = (gcnew System::Windows::Forms::PictureBox());
			this->pRight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->manu = (gcnew System::Windows::Forms::Label());
			this->lTime = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Label());
			this->lscore = (gcnew System::Windows::Forms::Label());
			this->pause = (gcnew System::Windows::Forms::Label());
			this->lPause = (gcnew System::Windows::Forms::Label());
			this->gameTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->ballTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lFall = (gcnew System::Windows::Forms::Label());
			this->lLife = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->field))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// field
			// 
			this->field->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"field.Image")));
			this->field->Location = System::Drawing::Point(18, 70);
			this->field->Name = L"field";
			this->field->Size = System::Drawing::Size(494, 459);
			this->field->TabIndex = 2;
			this->field->TabStop = false;
			// 
			// level
			// 
			this->level->AutoSize = true;
			this->level->BackColor = System::Drawing::Color::Transparent;
			this->level->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->level->ForeColor = System::Drawing::Color::Navy;
			this->level->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"level.Image")));
			this->level->Location = System::Drawing::Point(184, 354);
			this->level->Name = L"level";
			this->level->Size = System::Drawing::Size(161, 40);
			this->level->TabIndex = 3;
			this->level->Text = L"Уровень 1";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::Color::Transparent;
			this->start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->start->ForeColor = System::Drawing::Color::Purple;
			this->start->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"start.Image")));
			this->start->Location = System::Drawing::Point(143, 423);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(244, 51);
			this->start->TabIndex = 4;
			this->start->Text = L"Начать игру";
			this->start->Click += gcnew System::EventHandler(this, &LevelSelect::start_Click);
			this->start->MouseEnter += gcnew System::EventHandler(this, &LevelSelect::start_MouseEnter);
			this->start->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::start_MouseLeave);
			// 
			// pLeft
			// 
			this->pLeft->BackColor = System::Drawing::Color::Transparent;
			this->pLeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pLeft.BackgroundImage")));
			this->pLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pLeft->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pLeft.Image")));
			this->pLeft->Location = System::Drawing::Point(94, 355);
			this->pLeft->Name = L"pLeft";
			this->pLeft->Size = System::Drawing::Size(67, 40);
			this->pLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pLeft->TabIndex = 5;
			this->pLeft->TabStop = false;
			this->pLeft->Click += gcnew System::EventHandler(this, &LevelSelect::pLeft_Click);
			// 
			// pRight
			// 
			this->pRight->BackColor = System::Drawing::Color::Transparent;
			this->pRight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pRight.BackgroundImage")));
			this->pRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pRight->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pRight.Image")));
			this->pRight->Location = System::Drawing::Point(360, 355);
			this->pRight->Name = L"pRight";
			this->pRight->Size = System::Drawing::Size(67, 40);
			this->pRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pRight->TabIndex = 6;
			this->pRight->TabStop = false;
			this->pRight->Click += gcnew System::EventHandler(this, &LevelSelect::pRight_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(530, 18);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 52);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(18, 464);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(512, 52);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(18, 464);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// manu
			// 
			this->manu->AutoSize = true;
			this->manu->BackColor = System::Drawing::Color::Transparent;
			this->manu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->manu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->manu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->manu->Location = System::Drawing::Point(2, 11);
			this->manu->Name = L"manu";
			this->manu->Size = System::Drawing::Size(85, 27);
			this->manu->TabIndex = 10;
			this->manu->Text = L"В меню";
			this->manu->Click += gcnew System::EventHandler(this, &LevelSelect::manu_Click);
			this->manu->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::manu_MouseLeave);
			this->manu->MouseHover += gcnew System::EventHandler(this, &LevelSelect::manu_MouseHover);
			// 
			// lTime
			// 
			this->lTime->AutoSize = true;
			this->lTime->BackColor = System::Drawing::Color::Transparent;
			this->lTime->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lTime->ForeColor = System::Drawing::Color::White;
			this->lTime->Location = System::Drawing::Point(437, 5);
			this->lTime->Name = L"lTime";
			this->lTime->Size = System::Drawing::Size(93, 38);
			this->lTime->TabIndex = 11;
			this->lTime->Text = L"00:00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(292, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 27);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Счет:";
			// 
			// save
			// 
			this->save->AutoSize = true;
			this->save->BackColor = System::Drawing::Color::Transparent;
			this->save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->save->Location = System::Drawing::Point(93, 11);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(108, 27);
			this->save->TabIndex = 13;
			this->save->Text = L"Сохранить";
			this->save->Click += gcnew System::EventHandler(this, &LevelSelect::save_Click);
			this->save->MouseEnter += gcnew System::EventHandler(this, &LevelSelect::save_MouseEnter);
			this->save->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::save_MouseLeave);
			// 
			// lscore
			// 
			this->lscore->AutoSize = true;
			this->lscore->BackColor = System::Drawing::Color::Transparent;
			this->lscore->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lscore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lscore->Location = System::Drawing::Point(348, 5);
			this->lscore->Name = L"lscore";
			this->lscore->Size = System::Drawing::Size(81, 38);
			this->lscore->TabIndex = 14;
			this->lscore->Text = L"0000";
			// 
			// pause
			// 
			this->pause->AutoSize = true;
			this->pause->BackColor = System::Drawing::Color::Transparent;
			this->pause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pause->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pause->Location = System::Drawing::Point(207, 11);
			this->pause->Name = L"pause";
			this->pause->Size = System::Drawing::Size(70, 27);
			this->pause->TabIndex = 15;
			this->pause->Text = L"Пауза";
			this->pause->Click += gcnew System::EventHandler(this, &LevelSelect::pause_Click);
			this->pause->MouseEnter += gcnew System::EventHandler(this, &LevelSelect::pause_MouseEnter);
			this->pause->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::pause_MouseLeave);
			// 
			// lPause
			// 
			this->lPause->BackColor = System::Drawing::Color::Transparent;
			this->lPause->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lPause->ForeColor = System::Drawing::Color::Navy;
			this->lPause->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lPause.Image")));
			this->lPause->Location = System::Drawing::Point(100, 347);
			this->lPause->Name = L"lPause";
			this->lPause->Size = System::Drawing::Size(329, 114);
			this->lPause->TabIndex = 16;
			this->lPause->Text = L"----- Пауза ----- Если Вы готовы - нажмите пробелл";
			this->lPause->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gameTime
			// 
			this->gameTime->Interval = 1000;
			this->gameTime->Tick += gcnew System::EventHandler(this, &LevelSelect::gameTime_Tick);
			// 
			// ballTimer
			// 
			this->ballTimer->Interval = 27;
			this->ballTimer->Tick += gcnew System::EventHandler(this, &LevelSelect::ballTimer_Tick);
			// 
			// lFall
			// 
			this->lFall->BackColor = System::Drawing::Color::Transparent;
			this->lFall->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lFall->ForeColor = System::Drawing::Color::Red;
			this->lFall->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lFall.Image")));
			this->lFall->Location = System::Drawing::Point(115, 71);
			this->lFall->Name = L"lFall";
			this->lFall->Size = System::Drawing::Size(299, 35);
			this->lFall->TabIndex = 17;
			this->lFall->Text = L"Жизнь потеряна";
			this->lFall->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lFall->Visible = false;
			// 
			// lLife
			// 
			this->lLife->BackColor = System::Drawing::Color::Transparent;
			this->lLife->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lLife->ForeColor = System::Drawing::Color::Purple;
			this->lLife->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lLife.Image")));
			this->lLife->Location = System::Drawing::Point(17, 479);
			this->lLife->Margin = System::Windows::Forms::Padding(0);
			this->lLife->Name = L"lLife";
			this->lLife->Size = System::Drawing::Size(191, 30);
			this->lLife->TabIndex = 18;
			this->lLife->Text = L"Жизней:";
			this->lLife->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lLife->Visible = false;
			// 
			// LevelSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 514);
			this->Controls->Add(this->lLife);
			this->Controls->Add(this->lFall);
			this->Controls->Add(this->lPause);
			this->Controls->Add(this->pause);
			this->Controls->Add(this->lscore);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lTime);
			this->Controls->Add(this->manu);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pRight);
			this->Controls->Add(this->pLeft);
			this->Controls->Add(this->start);
			this->Controls->Add(this->level);
			this->Controls->Add(this->field);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"LevelSelect";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор уровня";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LevelSelect::LevelSelect_FormClosed);
			this->Load += gcnew System::EventHandler(this, &LevelSelect::LevelSelect_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LevelSelect::LevelSelect_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LevelSelect::LevelSelect_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->field))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#define LEVELS 5
#define COLUMNS 13
	private:
	int levelN, rows;	
	Field* levels; //массив полей

	array<PictureBox^>^ pictureBoxs;
	bool onGame, isPlaying;
		
	Game* game; //класс игры
	PictureBox^ batPict;
	PictureBox^ ballPict;
	Label^ lLifes;

	//иницилизирует метку с количеством жизни
	void initLifeLabel();
	//иницилизирует картинку ракетки и отображает ее на экране
	void initBat();
	//иницилизирует картинку мячика и отображает его на экране
	void initBall();
	
	//привести игру в игровое состояние
	void startGameElem();
	//привести игру в начальное неигровое состояние
	void startElem();
	//начать сохраненнцю игру
	void contGame(System::Object^  sender, System::EventArgs^  e);

	//прорисовать поле
	void drawField(Field f);
	//поместить объкт в указаном месте
	void moveObject(int x, int y, PictureBox^ pb);
	
	//отображение времени от начала игры
	System::Void gameTime_Tick(System::Object^  sender, System::EventArgs^  e);

	//обеспечение передвижния мяча
	System::Void ballTimer_Tick(System::Object^  sender, System::EventArgs^  e);
	//выполнение дейстыий после окончания игры
	void endedGame();
	//проверка результата игры
	void checkResult();
	//выполнение дейстыий после победы
	void victoriActions();	
	//выполнение дейстыий после проигрыша
	void loseActions(System::Object^  sender, System::EventArgs^  e);

	//обработчик события при нажатия на определенные клавиши
	System::Void LevelSelect_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);

	//вернуться в гланое меню
	void toMainManu();
	
//инициализация компонентов при загрузке формы
System::Void LevelSelect_Load(System::Object^  sender, System::EventArgs^  e) 
{
	rows = 0;
	levelN = 1;
	isPlaying = false;
	onGame = false;
	
	levels = new Field[LEVELS];
	//загрузка уровней из файла
	for(int i = 1; i <= LEVELS; i++)
	{
		char num[3];
		itoa(i,num,10);
		string fName = num;	
		levels[i-1].createFromFile("levels/"+fName+".txt");	
	}

	initLifeLabel();

	if (isNew) startElem();
	else contGame(sender, e);
}

System::Void LevelSelect_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
{
	mainForm->Close();
}

//выбор уровня закончен - пора перейти к игре
System::Void start_Click(System::Object^  sender, System::EventArgs^  e)
{
	//начать игру и инициализировать компоненты
	onGame = true;
	game = new Game(levels[levelN-1]);
	game->level() = levelN-1;
	initBat();
	initBall();
	this->Text = level->Text;
	lTime->Text = "00:00"; 	
	startGameElem();
}

//Возврат назад в главное меню
System::Void manu_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (onGame)
	{
		//ставим на паузу
		lPause->Visible = true;	
		isPlaying = false;
		gameTime->Enabled = false;
		ballTimer->Enabled = false;
	}
	System::Windows::Forms::DialogResult result;		
	result = MessageBox::Show(this, "Вы действительно хотите выйти?", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    //желает ли пользователь выйти
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		save_Click(sender, e);
		mainForm->Show();
		this->Hide();	
	} 	
}

//сохранение игры
System::Void save_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (onGame)
	{
		 //ставим на паузу
		 lPause->Visible = true;	
		 isPlaying = false;
		 gameTime->Enabled = false;
		 ballTimer->Enabled = false;
		 //спрашиваем подтверждение
		 System::Windows::Forms::DialogResult result;		
		 result = MessageBox::Show(this, "Сохранить текущую игру?", "Сохранение игры", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
         //если он хочет сохранять - сохранить
		 if (result == System::Windows::Forms::DialogResult::Yes)
		 {
			 game->save();
		 }		 
	}
}

//нажатие паузы - остановить или продолжить игру
System::Void pause_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (onGame)
	{
		lPause->Visible = !lPause->Visible;
		isPlaying = !isPlaying;
		gameTime->Enabled = !gameTime->Enabled;
		ballTimer->Enabled = !ballTimer->Enabled;
		lFall->Visible = false;
	}
}

//прелистывание уровней влево
System::Void pLeft_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//удаляем отраженные ранее пикчерБоксы
	for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i];
	levelN--;
	drawField(levels[levelN-1]); //рисуем новые
	if (levelN <= 1) pLeft->Visible = false;
	pRight->Visible = true;
	level->Text = "Уровень "+System::Convert::ToInt32(levelN);
}

//прелистывание уровней вправо
System::Void pRight_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//удаляем отраженные ранее пикчерБоксы
	for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i];
	levelN++; 
	drawField(levels[levelN-1]); //рисуем новые
	if (levelN >= LEVELS) pRight->Visible = false;
	pLeft->Visible = true;
	level->Text = "Уровень "+System::Convert::ToInt32(levelN);
}

//функции отвечают за смену цвета элемента управления при наведении мыши.
System::Void start_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
	start->ForeColor = Color::FromName("Fuchsia");
}

System::Void start_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	start->ForeColor = Color::FromName("Purple"); 
}

System::Void manu_MouseHover(System::Object^  sender, System::EventArgs^  e)
{
	manu->ForeColor = Color::FromName("Gold");
}

System::Void manu_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	manu->ForeColor = Color::FromArgb(255, 255, 128);
}

System::Void save_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	save->ForeColor = Color::FromName("Gold");
}

System::Void save_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	save->ForeColor = Color::FromArgb(255, 255, 128);
}

System::Void pause_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	pause->ForeColor = Color::FromName("Gold");
}

System::Void pause_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	pause->ForeColor = Color::FromArgb(255, 255, 128);
}

System::Void LevelSelect_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){}

};
}
