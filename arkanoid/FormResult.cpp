#include "StdAfx.h"
#include "FormResult.h"
using namespace arkanoid;

//отображает результаты заданного уровня в метки
void FormResult::showResults(int level)
{
	 for (int i = 0; i < result[level]->getLines(); i++)
	 {
		 labels[i*COLUMNS]->Text = System::Convert::ToString(i+1);
		 labels[i*COLUMNS+1]->Text = convetToStr(result[level]->getName(i));
		 int minutes = result[level]->getTime(i)/60;
		 int seconds = result[level]->getTime(i)%60;
		 labels[i*COLUMNS+2]->Text = ((minutes < 10) ? "0" : "")+System::Convert::ToString(minutes)+":"+((seconds < 10) ? "0" : "")+System::Convert::ToString(seconds);
	 }			
}

//инициализирует массив меток
void FormResult::initLabels()
{
	 labels = gcnew array<Label^>(result[0]->getLines()*COLUMNS);
	 for (int i = 0; i < result[0]->getLines(); i++)
	 {
		 //назначеет дизайн, положение
		 for (int j = 0; j < COLUMNS; j++)
		 {
			labels[i*COLUMNS+j] = gcnew Label;
			labels[i*COLUMNS+j]->Font = label3->Font;
			labels[i*COLUMNS+j]->ForeColor = label3->ForeColor;
			labels[i*COLUMNS+j]->BackColor = Color::Transparent;
			labels[i*COLUMNS+j]->TextAlign = label3->TextAlign;
		 }
				 		
		 labels[i*COLUMNS]->Size =  label3->Size;
		 labels[i*COLUMNS]->Left = label3->Left;
		 labels[i*COLUMNS]->Top = label3->Top+(i+1)*50;
		 this->Controls->Add(labels[i*COLUMNS]);
		 labels[i*COLUMNS+1]->Size =  label4->Size;
		 labels[i*COLUMNS+1]->Left = label4->Left;
		 labels[i*COLUMNS+1]->Top = label4->Top+(i+1)*50;
		 this->Controls->Add(labels[i*COLUMNS+1]);
		 labels[i*COLUMNS+2]->Size =  label5->Size;
		 labels[i*COLUMNS+2]->Left = label5->Left;
		 labels[i*COLUMNS+2]->Top = label5->Top+(i+1)*50;
		 this->Controls->Add(labels[i*COLUMNS+2]);
	 }
}
		 
//конвертирует string в String^ 
String^ FormResult::convetToStr(string str)
{
	 String^ res = gcnew String(str.c_str());
	 return res;
}


