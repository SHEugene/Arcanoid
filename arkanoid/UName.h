#pragma once
#include "LevelSelect.h"
#include "Result.h"
namespace arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UName
	/// </summary>
	public ref class UName : public System::Windows::Forms::Form
	{
	private:
		int time;
		Result *result;
	public:
		UName(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		UName(int _time, Result *res)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			time = _time;
			result = res;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UName()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UName::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(288, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 207);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Поздравляем! Вы сбили все блоки и следали это настолько быстро, что попали в спис" 
				L"ок лучших.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 41);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Как же Вас зовут\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->name->Location = System::Drawing::Point(294, 239);
			this->name->MaxLength = 24;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(322, 41);
			this->name->TabIndex = 16;
			this->name->Text = L"Аноним";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(210, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 42);
			this->button1->TabIndex = 17;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UName::button1_Click);
			// 
			// UName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(628, 350);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UName";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"    Имя рекордсмена";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//обработчик события по кнопке - считать имя и добавить его к результатам
	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		string strName;
		if (name->Text != "") MarshalString (name->Text, strName);
		else strName = "Aноним";

		result->add(strName, time); //добавление имя+время
		this->Close(); //закрыть
	}

	//конвертация String ^ в string
	void MarshalString (String ^ s, string& os) 
	{  
		using namespace Runtime::InteropServices;  
		const char* chars =   
			 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();  
		os = chars;  
		Marshal::FreeHGlobal(IntPtr((void*)chars)); 
	}
};
}
