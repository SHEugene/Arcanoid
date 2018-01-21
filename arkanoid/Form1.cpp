#include "StdAfx.h"
#include "Form1.h"
#include "LevelSelect.h"
#include "FormResult.h"
using namespace arkanoid;

Void Form1::newGame_Click(System::Object^  sender, System::EventArgs^  e)
{
	LevelSelect^ f2 = gcnew LevelSelect(this, true);
    f2->Show();
    this->Hide();
}

System::Void Form1::contGame_Click(System::Object^  sender, System::EventArgs^  e)
{
	LevelSelect^ f2 = gcnew LevelSelect(this, false);
    f2->Show();
    this->Hide();
}

System::Void Form1::Records_Click(System::Object^  sender, System::EventArgs^  e)
{
	FormResult^ f2 = gcnew FormResult(this);
    f2->Show();
    this->Hide();
}