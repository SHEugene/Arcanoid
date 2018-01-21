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
	vector<string> matrix;		//������� ������ �� ����
	map<char, int> scoreTable; //������� ����� �� ������ �����
	int score; //���� �� ������ �����
	int fWidth; //������ ����

	//��������� �������� �� ������ ����� � ��������� � ����
	int checkBoard(int x, int y, int x1, int y1, int &row, int &col);
	//��������� ���������� ������������ � ����
	void  applyCollision(vector<int> &index);
public:
	Field();
	virtual ~Field(void);

	void createFromFile(string fName); //���������� �������� �� �����
	void save(); //���������� ������� � ����
		
	int collisionWalls(int& x, int& y, int size); //�������� �� ������������ ������� � ������ ����
	vector<int> collisionBlocks(int &x, int &y, int size, int &board); //�������� �� ������������ ������� � ������ ������

	bool isEmpty(); //�������� ������ �� ��� ������ ����

	string operator[](int n); //��� ������� � ������� ����� []
	int rowsNumber(); //���������� ���������� ����� �������

	//������ ��������������� ������ � ������ ���� � ����� ���������
	int& width();
	int& scores();

};

