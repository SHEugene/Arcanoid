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
	Game(Field _field); //начало новой игры
	Game(); //загрузить игру из файла
	virtual ~Game(void);

	void save(); //выгрузить игру в файл

	//протестировать на столкновение и принять меры
	int testCollision();
		
	//покзывает закончилась ли игра поражением
	bool gameLose();
	//покзывает закончилась ли игра победой
	bool gameOver();
	
	//методы для обеспечения доступа к полям класса
	int& level();
	int& gLifes();
	int& gTime();
	int getBonus();
	int getScore();
	vector<int> getBitedBlocks();
	
	//методы для обеспечения косвенной связи с мячом и ракеткой
	void moveBatLeft();
	void moveBatRight();
	
	int& batWidth();
	int& batHeight();
	int& batX();
	int& batY();

	int& ballSize();
	int& ballX();
	int& ballY();

	//получить поле
	Field getField(){return field;}
private:
	//компоненты игры
	Field field;
	Bat* bat;
	Ball* ball;

	//данные игры
	int lifes;
	int timeG;
	int gLevel;
	int bonus;
	vector<int> bitedBlocks;
	
	//генерирует случайные числа в диапозоне
	int generateN(int from, int to);
};

