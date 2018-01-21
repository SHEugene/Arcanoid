#pragma once
#include <stdlib.h>     /* strtod */
#include <Windows.h>
#include <string>
#include <fstream>
#include <list>
#include "Form1.h"

namespace arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  newGame;
	private: System::Windows::Forms::Label^  contGame;
	private: System::Windows::Forms::Label^  Records;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  text;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	protected: 


	protected: 



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->newGame = (gcnew System::Windows::Forms::Label());
			this->contGame = (gcnew System::Windows::Forms::Label());
			this->Records = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// newGame
			// 
			this->newGame->AutoSize = true;
			this->newGame->BackColor = System::Drawing::Color::Transparent;
			this->newGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newGame->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->newGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->newGame->Location = System::Drawing::Point(159, 209);
			this->newGame->Name = L"newGame";
			this->newGame->Size = System::Drawing::Size(229, 51);
			this->newGame->TabIndex = 0;
			this->newGame->Text = L"Новая игра";
			this->newGame->Click += gcnew System::EventHandler(this, &Form1::newGame_Click);
			this->newGame->MouseEnter += gcnew System::EventHandler(this, &Form1::newGame_MouseEnter);
			this->newGame->MouseLeave += gcnew System::EventHandler(this, &Form1::newGame_MouseLeave);
			// 
			// contGame
			// 
			this->contGame->AutoSize = true;
			this->contGame->BackColor = System::Drawing::Color::Transparent;
			this->contGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->contGame->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->contGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->contGame->Location = System::Drawing::Point(149, 131);
			this->contGame->Name = L"contGame";
			this->contGame->Size = System::Drawing::Size(250, 51);
			this->contGame->TabIndex = 1;
			this->contGame->Text = L"Продолжить";
			this->contGame->Click += gcnew System::EventHandler(this, &Form1::contGame_Click);
			this->contGame->MouseEnter += gcnew System::EventHandler(this, &Form1::contGame_MouseEnter);
			this->contGame->MouseLeave += gcnew System::EventHandler(this, &Form1::contGame_MouseLeave);
			// 
			// Records
			// 
			this->Records->AutoSize = true;
			this->Records->BackColor = System::Drawing::Color::Transparent;
			this->Records->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Records->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Records->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Records->Location = System::Drawing::Point(180, 279);
			this->Records->Name = L"Records";
			this->Records->Size = System::Drawing::Size(174, 51);
			this->Records->TabIndex = 2;
			this->Records->Text = L"Рекорды";
			this->Records->Click += gcnew System::EventHandler(this, &Form1::Records_Click);
			this->Records->MouseEnter += gcnew System::EventHandler(this, &Form1::Records_MouseEnter);
			this->Records->MouseLeave += gcnew System::EventHandler(this, &Form1::Records_MouseLeave);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(38, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 75);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Приветствуем Вас в игре Арканоид! Проводите время весело!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// text
			// 
			this->text->BackColor = System::Drawing::Color::Transparent;
			this->text->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->text->ForeColor = System::Drawing::Color::White;
			this->text->Location = System::Drawing::Point(38, 358);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(455, 75);
			this->text->TabIndex = 4;
			this->text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(467, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(467, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 504);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Records);
			this->Controls->Add(this->contGame);
			this->Controls->Add(this->newGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Арканоид";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	System::Media::SoundPlayer^ player;

	//переход на другие формы
	System::Void newGame_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void contGame_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void Records_Click(System::Object^  sender, System::EventArgs^  e);
	
	//включить музыку при загрузке формы
	System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
	{
		player = gcnew System::Media::SoundPlayer();

		player->SoundLocation = ("morskie-d-yavoly-smerch-2-ktc.wav");
		player->LoadAsync();
		player->PlayLooping();

		pictureBox1->Visible = true;
		pictureBox2->Visible = false;
	}

	//востпроизвести музыку
	System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		pictureBox1->Visible = true;
		pictureBox2->Visible = false;
		player->PlayLooping();
	}	
	
	//убрать музыку
	System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		pictureBox1->Visible = false;
		pictureBox2->Visible = true;
		player->Stop();
	}

	//организпция изменения цвета меток при наведении мыши
	System::Void contGame_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
	{
		Color color = Color::FromName("Gold");
		contGame->ForeColor = color;
		text->Text = "Переход к сохраненной раенее игре";
	}

	System::Void contGame_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Color color = Color::FromArgb(255, 255, 128);
		contGame->ForeColor = color;
		text->Text = "";
	}
	
	System::Void newGame_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
	{
		Color color = Color::FromName("Gold");
		newGame->ForeColor = color;
		text->Text = "Переход к выбору уровня";
	}

	System::Void newGame_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Color color = Color::FromArgb(255, 255, 128);
		newGame->ForeColor = color;
		text->Text = "";
	}

	System::Void Records_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
	{
		Color color = Color::FromName("Gold");
		Records->ForeColor = color;
		text->Text = "Переход к просмотру таблицы рекордов";
	}

	System::Void Records_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		Color color = Color::FromArgb(255, 255, 128);
		Records->ForeColor = color;
		text->Text = "";
	}
};
}

