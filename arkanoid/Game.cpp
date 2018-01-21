#include "StdAfx.h"
#include "Game.h"

#include <time.h>
#include <stdlib.h>

//начало новой игры
Game::Game(Field _field)
{
	field =  _field;
	bat = new Bat(field.width());	
	ball = new Ball(field.width(), bat->batY());
	timeG = START_TIME;
	lifes = START_LIFES;
	bonus = 0;
	gLevel = 0;
}

//загрузить игру из файла
Game::Game()
{	
	field.createFromFile(SAVE_FIELD_NAME);
	bat = new Bat(field.width());	
	ball = new Ball(field.width(), bat->batY());
	ifstream fin;
	fin.open(SAVE_NAME);
	fin >> gLevel;
	fin >> timeG;
	fin >>  field.scores();
	fin >> lifes;
	fin >> bat->batX();
	fin >> bat->batY();
	fin >> ball->ballX();
	fin >> ball->ballY();
	fin >> ball->xSpeed();
	fin >> ball->ySpeed();
	fin.close();
	bonus = 0;
}

Game::~Game(void)
{
    delete bat;
	delete ball;
}

//генерирует случайные числа в диапозоне
int Game::generateN(int from, int to)
{
	time_t t;
	t = time(&t);
	srand(t);
	return rand() % abs(from - to) + from;
}

//выгрузить игру в файл
void Game::save()
{
	ofstream fout;
	//загрузка уровня в файл
	fout.open(SAVE_NAME);
	fout << gLevel << endl;
	fout << timeG << endl;
	fout <<  field.scores() << endl;
	fout << lifes << endl;
	fout << bat->batX() << endl;
	fout << bat->batY() << endl;
	fout << ball->ballX() << endl;
	fout << ball->ballY() << endl;
	fout << ball->xSpeed() << endl;
	fout << ball->ySpeed() << endl;
	fout.close();
	field.save();
}

//протестировать на столкновение и принять меры
int Game::testCollision()
{
	int result = NO_CRITICAL_S;
	//задать скорость мяча, если не задана
	if (ball->ySpeed() == 0) ball->ySpeed() = 6; 
	else ball->move(); //или передвинуть его

	//проверить - если ли столкновение со стеной поля
	if (int situation = field.collisionWalls(ball->ballX(), ball->ballY(), ball->ballSize()))
	{
		switch(situation)
		{
		case 1:
			ball->xSpeed() = -ball->xSpeed();
			break;
		case 2:
			ball->ySpeed() = -ball->ySpeed();
			 break;
		case 3:			
			ball->xSpeed() = -ball->xSpeed();
			break;
		case 4:
			ball->retToStartPos();
			bat->retToStartPos();
			lifes--;
			result = BALL_FALL;
			break;
		default:
			break;
		}		
	}
	//если столкновение с ракеткой
	double ctg = bat->collisionBat(ball->ballX(), ball->ballY(), ball->ballSize());
	if (ctg != -100.0)
	{
		//задать скорость по х в зависимоти от точки столкновения
		ball->xSpeed() = ctg*abs(ball->ySpeed())*0.9;
		ball->ySpeed() = -ball->ySpeed();
	}
	//проверить на столкновение с блоком
	int boardN;
	bitedBlocks = field.collisionBlocks(ball->ballX(), ball->ballY(), ball->ballSize(), boardN);
	if (boardN)
	{
		bonus = 0;
		if (generateN(0, MAX_BONUS) == LIFE_BONUS)
		{
			bonus = LIFE_BONUS;
			lifes++;
		}
		result = BLOCK_BIT;
		if (boardN%2 == 0) ball->ySpeed() = -ball->ySpeed();
		else ball->xSpeed() = -ball->xSpeed();
	}

	return result;
}

//покзывает закончилась ли игра поражением
bool Game::gameLose()
{
	bool result = false;
	if (lifes < 0)
	{
		result = true;
	}
	return result;
}

//покзывает закончилась ли игра победой
bool Game::gameOver()
{
	return field.isEmpty();
}

//методы для обеспечения доступа к полям класса
int& Game::level()
{
	return gLevel;
}

int& Game::gLifes()
{
	return lifes;
}

int& Game::gTime()
{
	return timeG;
}

int Game::getBonus()
{
	return bonus;
}

int Game::getScore()
{
	return field.scores();
}

vector<int> Game::getBitedBlocks()
{
	return bitedBlocks;
}

//методы для обеспечения косвенной связи с мячом и ракеткой
void Game::moveBatLeft()
{
	bat->moveLeft();
}

void Game::moveBatRight()
{
	bat->moveRight();
}

int& Game::batWidth()
{
	return bat->batWidth();
}

int& Game::batHeight()
{
	return bat->batHeight();
}

int& Game::batX()
{
	return bat->batX();
}

int& Game::batY()
{
	return bat->batY();
}

int& Game::ballX()
{
	return ball->ballX();
}

int& Game::ballY()
{
	return ball->ballY();
}

int& Game::ballSize()
{
	return ball->ballSize();
}