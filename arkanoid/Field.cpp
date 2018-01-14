#include "StdAfx.h"
#include "Field.h"


Field::Field(void)
{
}


Field::~Field(void)
{
}

//заполнение матирицы из файла
void Field::createFromFile(string fName)
{
	ifstream fin;
	string temp = "";
	//загрузка уровней из файла
	fin.open(fName);
	while (!fin.eof())
	{
		fin >> temp;
		matrix.push_back(temp);
	}
	fin.close();
}

int Field::rowsNumber()
{
	return matrix.size();
}

string Field::operator[](int n)
{
	string result = "";
	if (n <= matrix.size())
	{
		result = matrix[n];
	}
	return result;
}

//сохранение игры
void Field::save()
{
	ofstream fout;
	//загрузка уровня в файл
	fout.open(SAVE_FILE_NAME);
	int rows = matrix.size();
	for(int i = 0; i < rows; i++)
	{
		fout << matrix[i] << endl;
	}
	fout.close();
}