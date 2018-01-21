#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#define FOLDER "results/"
#define RES_N 5
class Result
{
public:
	Result();
	Result(int level);

	virtual ~Result(void);

	void add(string name, int gTime); //добавить время в таблицу результатов
	bool isRecord(int gTime); //входит ли время в лучшие

	string getName(int i); //имя по заданному индексу
	int getTime(int i); //время по заданному индексу
	int getLines(){return RES_N;} //количество резкльтатов
private:
	string names[RES_N]; //массив имен
	int times[RES_N]; //массив времени
	string fName; //имя файла
	
	void writeToFile(); //загрузка в файл результатов уровня
	void readFromFile(); //загрузка результатов уровня из файла
};

