#pragma once
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#define SAVE_FIELD_NAME "saveGame.txt"
#define BLOCK_HEIGHT 15
#define BLOCK_WIDTH 38
#define WIDTH 494
#define HEIGHT 415 
#define MIN_POS 0 

class Field
{
private:
	vector<string> matrix;		//матрица блоков на поле
	map<char, int> scoreTable; //таблица очков за убитые блоки
	int score; //очки за сбитые блоки
	int fWidth; //ширина пол€

	//проаерить коснулс€ ли объект блока и соседнему к нему
	int checkBoard(int x, int y, int x1, int y1, int &row, int &col);
	//применить результаты столкновени€ к полю
	void  applyCollision(vector<int> &index);
public:
	Field();
	virtual ~Field(void);

	void createFromFile(string fName); //заполнение матирицы из файла
	void save(); //сохранение матрицы в файл
		
	int collisionWalls(int& x, int& y, int size); //проверка на столкновение объекта с кра€ми пол€
	vector<int> collisionBlocks(int &x, int &y, int size, int &board); //проверка на столкновение объекта с кра€ми блоков

	bool isEmpty(); //проверка просты ли все €чейки пол€

	string operator[](int n); //дл€ доступа к матрици через []
	int rowsNumber(); //возвращает колицество строк матрицы

	//методы предоставл€ющие доступ к ширине пол€ и очкам набранным
	int& width();
	int& scores();

};

