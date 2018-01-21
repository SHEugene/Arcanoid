#pragma once
#include "Field.h"
#include "Bat.h"
#include "Ball.h"

#define BALL_FALL 1
#define BLOCK_BIT 2
#define NO_CRITICAL_S 0

#define START_TIME 0
#define START_LIFES 5

#define MAX_BONUS 10
#define LIFE_BONUS 1

#define SAVE_NAME "save.txt"

class Game
{
public:
	Game(Field _field); //������ ����� ����
	Game(); //��������� ���� �� �����
	virtual ~Game(void);

	void save(); //��������� ���� � ����

	//�������������� �� ������������ � ������� ����
	int testCollision();
		
	//��������� ����������� �� ���� ����������
	bool gameLose();
	//��������� ����������� �� ���� �������
	bool gameOver();
	
	//������ ��� ����������� ������� � ����� ������
	int& level();
	int& gLifes();
	int& gTime();
	int getBonus();
	int getScore();
	vector<int> getBitedBlocks();
	
	//������ ��� ����������� ��������� ����� � ����� � ��������
	void moveBatLeft();
	void moveBatRight();
	
	int& batWidth();
	int& batHeight();
	int& batX();
	int& batY();

	int& ballSize();
	int& ballX();
	int& ballY();

	//�������� ����
	Field getField(){return field;}
private:
	//���������� ����
	Field field;
	Bat* bat;
	Ball* ball;

	//������ ����
	int lifes;
	int timeG;
	int gLevel;
	int bonus;
	vector<int> bitedBlocks;
	
	//���������� ��������� ����� � ���������
	int generateN(int from, int to);
};

