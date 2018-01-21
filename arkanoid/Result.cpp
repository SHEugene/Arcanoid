#include "StdAfx.h"
#include "Result.h"

Result::Result()
{
}

Result::Result(int level)
{
	char num[3];
	itoa(level+1,num,10);
	string fN = num;
	fName = FOLDER+fN+".txt";
	readFromFile();
}

Result::~Result(void)
{
}

//добавить время в таблицу результатов
void Result::add(string name, int gTime)
{
	int i = 0;
	//найти место под запись нового результата
	while (i < RES_N && gTime >= times[i])
	{
		i++;
	}
	if (i < RES_N)
	{
		//скопировать последующик на уровень ниже
		for (int j = RES_N-1; j <= i; j++)
		{
			times[j] = times[j-1];
			names[j] = names[j-1];
		}
		//записать результат
		times[i] = gTime;
		names[i] = name;
	}
	writeToFile();	//записать в файл
}

//загрузка результатов уровня из файла
void Result::readFromFile()
{
	ifstream fin;
	fin.open(fName); //отрываем	
	//читаем
	for (int i = 0; i < RES_N; i++)
	{
		fin >> names[i];
		fin >> times[i];
	}
	fin.close(); //закрываем
}

//загрузка в файл результатов уровня
void Result::writeToFile()
{	
	ofstream fout;
	fout.open(fName); //отрываем
	//записываем
	for(int i = 0; i < RES_N-1; i++)
	{
		fout << names[i] << " " << times[i] << endl;
	}
	fout << names[RES_N-1] << " " << times[RES_N-1];
	fout.close(); //закрываем
}

//проверить входит ли время в лучшие
bool Result::isRecord(int gTime)
{
	bool result = false;
	if (gTime < times[RES_N-1])
	{
		result = true;
	}
	return result;
}

string Result::getName(int i)
{
	string result = "";
	if (i < RES_N)
	{
		result = names[i];
	}
	return result;
}

int Result::getTime(int i)
{
	int result = 0;
	if (i < RES_N)
	{
		result = times[i];
	}
	return result;
}

