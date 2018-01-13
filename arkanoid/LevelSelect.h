#pragma once
#include <vector>
#include <stdlib.h>     /* strtod */
#include <Windows.h>
#include <string>
#include <fstream>
#include <list>
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
	public:
		LevelSelect (void)
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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  save;

	private: System::Windows::Forms::Label^  label4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->field->Size = System::Drawing::Size(494, 487);
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
			this->manu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->manu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->manu->Location = System::Drawing::Point(3, 10);
			this->manu->Name = L"manu";
			this->manu->Size = System::Drawing::Size(93, 30);
			this->manu->TabIndex = 10;
			this->manu->Text = L"В меню";
			this->manu->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::manu_MouseLeave);
			this->manu->MouseHover += gcnew System::EventHandler(this, &LevelSelect::manu_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(437, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"00:00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(257, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 30);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Счет:";
			// 
			// save
			// 
			this->save->AutoSize = true;
			this->save->BackColor = System::Drawing::Color::Transparent;
			this->save->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->save->Location = System::Drawing::Point(117, 10);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(118, 30);
			this->save->TabIndex = 13;
			this->save->Text = L"Сохнарить";
			this->save->MouseEnter += gcnew System::EventHandler(this, &LevelSelect::save_MouseEnter);
			this->save->MouseLeave += gcnew System::EventHandler(this, &LevelSelect::save_MouseLeave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(321, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 38);
			this->label4->TabIndex = 14;
			this->label4->Text = L"0000";
			// 
			// LevelSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 504);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->manu);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pRight);
			this->Controls->Add(this->pLeft);
			this->Controls->Add(this->start);
			this->Controls->Add(this->level);
			this->Controls->Add(this->field);
			this->Name = L"LevelSelect";
			this->Text = L"Выбор уровня";
			this->Load += gcnew System::EventHandler(this, &LevelSelect::LevelSelect_Load);
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
#define ROWS 30
	private:

	int levelN;
	int rows;
	vector<string>** levels; //массив векторов строк
	array<PictureBox^>^ pictureBoxs;

	void drawField(int number)
	{
		if (number <= LEVELS)
		{
			number--;
			vector<string>* level = levels[number];
			rows = level->size();
			int x = 0;
			int y = 0;
			pictureBoxs = gcnew array<PictureBox^>(rows*COLUMNS);
			for (int i = 0; i < rows; i++)
			{
				string a = (*level)[i];
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
	System::Void LevelSelect_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		rows = 0;
		levelN = 1;
		levels = new vector<string>*[LEVELS];
		ifstream fin;
		string temp = "";
		//загрузка уровней из файла
		for(int i = 1; i <= LEVELS; i++)
		{
			levels[i-1] = new vector<string>;
			char num[3];
			itoa(i,num,10);
			string fName = num;	
			fin.open("levels/"+fName+".txt");
			while (!fin.eof())
			{
				fin >> temp;
				levels[i-1]->push_back(temp);
			}
			fin.close();
		}
		drawField(1);
		pLeft->Visible = false;
	}
	private: System::Void pLeft_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i];
				 levelN--;
				 drawField(levelN);
				 if (levelN <= 1) pLeft->Visible = false;
				 pRight->Visible = true;
				 level->Text = "Уровень "+System::Convert::ToInt32(levelN);
			 }
private: System::Void pRight_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 for (int i = 0; i < rows*COLUMNS; i++) delete pictureBoxs[i];
			 levelN++;
			 drawField(levelN);
			 if (levelN >= LEVELS) pRight->Visible = false;
			 pLeft->Visible = true;
			 level->Text = "Уровень "+System::Convert::ToInt32(levelN);
		 }

private: System::Void start_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			Color color = Color::FromName("Fuchsia");
			start->ForeColor = color; 
		 }
private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void start_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			Color color = Color::FromName("Purple");
			start->ForeColor = color; 
		 }
private: System::Void manu_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 Color color = Color::FromName("Gold");
			 manu->ForeColor = color;
		 }
private: System::Void manu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			Color color = Color::FromArgb(255, 255, 128);
			manu->ForeColor = color;
		 }
private: System::Void save_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 Color color = Color::FromName("Gold");
			 save->ForeColor = color;
		 }
private: System::Void save_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			Color color = Color::FromArgb(255, 255, 128);
			save->ForeColor = color;
		 }
};
}
