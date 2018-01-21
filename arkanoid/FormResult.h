#pragma once
#define LEVELS 5
#include "Result.h"
#include "Form1.h"
namespace arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormResult
	/// </summary>
	public ref class FormResult : public System::Windows::Forms::Form
	{
	private:
		Form1^ mainform;
	public:
		FormResult(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		FormResult(Form1^ f)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			mainform = f;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  nLevel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  manu;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormResult::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nLevel = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->manu = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nLevel))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Уровень";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(505, 52);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Таблица результатов";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nLevel
			// 
			this->nLevel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->nLevel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->nLevel->Location = System::Drawing::Point(126, 60);
			this->nLevel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->nLevel->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->nLevel->Name = L"nLevel";
			this->nLevel->Size = System::Drawing::Size(67, 34);
			this->nLevel->TabIndex = 6;
			this->nLevel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->nLevel->ValueChanged += gcnew System::EventHandler(this, &FormResult::nLevel_ValueChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(14, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 46);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(126, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 46);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Имя";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(421, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 46);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Время";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->manu->Location = System::Drawing::Point(14, 25);
			this->manu->Name = L"manu";
			this->manu->Size = System::Drawing::Size(85, 27);
			this->manu->TabIndex = 11;
			this->manu->Text = L"В меню";
			this->manu->Click += gcnew System::EventHandler(this, &FormResult::manu_Click);
			// 
			// FormResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 504);
			this->Controls->Add(this->manu);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nLevel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"FormResult";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Результаты игр";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormResult::FormResult_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FormResult::FormResult_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nLevel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		#define COLUMNS 3	
	private: 
		array<Label^>^ labels;
		Result** result;
		//инициализирует массив меток
		 void initLabels();		 
		//конвертирует string в String^ 
		 String^ convetToStr(string str);
		 //отображает результаты заданного уровня в метки
		 void showResults(int level);


		//при изменении номера уровня отобразить соответстуюший уровень
		System::Void nLevel_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		{
			if (nLevel->Value > 0 && nLevel->Value <= 5)
			{
				showResults(System::Convert::ToInt32(nLevel->Value)-1);
			}
		}

        System::Void FormResult_Load(System::Object^  sender, System::EventArgs^  e) 
		{
			 //загрузить результаты уровней
			 result = new Result*[LEVELS];
			 for (int i = 0; i < LEVELS; i++)
			 {
				 result[i] = new Result(i);
			 }

			 initLabels(); 	//проинициализировать метки вывода результатов
			 showResults(0); //показать список
		}

		//при закрытии формы не забыть закрыть глвную, которая спрята
		 System::Void FormResult_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
		 {		
			 mainform->Close();
		 }

		 //вернуться в главное меню
		 System::Void manu_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 mainform->Show();
			 this->Hide();
		 }
};
}
