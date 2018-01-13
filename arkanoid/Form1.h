#pragma once
#include <stdlib.h>     /* strtod */
#include <Windows.h>
#include <string>
#include <fstream>
#include <list>
#include "LevelSelect.h"
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
			this->SuspendLayout();
			// 
			// newGame
			// 
			this->newGame->AutoSize = true;
			this->newGame->BackColor = System::Drawing::Color::Transparent;
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
			this->contGame->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->contGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->contGame->Location = System::Drawing::Point(149, 131);
			this->contGame->Name = L"contGame";
			this->contGame->Size = System::Drawing::Size(250, 51);
			this->contGame->TabIndex = 1;
			this->contGame->Text = L"Продолжить";
			this->contGame->MouseEnter += gcnew System::EventHandler(this, &Form1::contGame_MouseEnter);
			this->contGame->MouseLeave += gcnew System::EventHandler(this, &Form1::contGame_MouseLeave);
			// 
			// Records
			// 
			this->Records->AutoSize = true;
			this->Records->BackColor = System::Drawing::Color::Transparent;
			this->Records->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Records->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Records->Location = System::Drawing::Point(180, 277);
			this->Records->Name = L"Records";
			this->Records->Size = System::Drawing::Size(174, 51);
			this->Records->TabIndex = 2;
			this->Records->Text = L"Рекорды";
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
			this->text->Text = L"Приветствуем Вас в игре Арканоид! Чтоб начать играть нажмите \"Новая игра\".";
			this->text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 504);
			this->Controls->Add(this->text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Records);
			this->Controls->Add(this->contGame);
			this->Controls->Add(this->newGame);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Арканоид";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: 

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
private: System::Void newGame_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			LevelSelect^ f2 = gcnew LevelSelect();
            f2->Show();
            this->Hide();
		 }
};
}

