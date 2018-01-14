#pragma once
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#define SAVE_FILE_NAME "saveGame.txt"
#define BLOCK_HEIGHT 15
#define BLOCK_WIDTH 38
#define WIDTH 494
#define HEIGHT 415 
#define MIN_POS 0 
class Field
{
private:
	vector<string> matrix;
	int score;
	int time;
public:
	Field();
	~Field(void);
	void createFromFile(string fName);
	void save();
	int rowsNumber();
	string operator[](int n);
	vector<int> collisionBlocks(int &x, int &y, int size, int &board);
	int collisionWalls(int& x, int& y, int size);
private:	
	int checkBoard(int x, int y, int x1, int y1, int &row, int &col);
	void  Field::applyCollision(vector<int> &index);

};

