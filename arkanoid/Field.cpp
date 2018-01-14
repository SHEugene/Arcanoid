#include "StdAfx.h"
#include "Field.h"


Field::Field(void)
{
}


Field::~Field(void)
{
}

//���������� �������� �� �����
void Field::createFromFile(string fName)
{
	ifstream fin;
	string temp = "";
	//�������� ������� �� �����
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

//���������� ����
void Field::save()
{
	ofstream fout;
	//�������� ������ � ����
	fout.open(SAVE_FILE_NAME);
	int rows = matrix.size();
	for(int i = 0; i < rows; i++)
	{
		fout << matrix[i] << endl;
	}
	fout.close();
}