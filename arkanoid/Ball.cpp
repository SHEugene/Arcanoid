#include "StdAfx.h"
#include "Ball.h"

//конструктор использует ширину поля, у ракетки и инициализирует поля класса
Ball::Ball(int _fieldWidth, int _batY)
{
	fieldWidth = _fieldWidth;
	batY = _batY;
	size = SIZE;
	xspeed = yspeed = SPEED;
	retToStartPos();
}

Ball::~Ball(void)
{
}

//задать мячу начальные координаты по центру на ракетке
void Ball::retToStartPos()
{
	y = batY-size;
	x = (fieldWidth + size)/2;
}

//предвинуть мяч в зависимости от скорости
void Ball::move()
{
	y += yspeed;
	x += xspeed;
}

//методы предоставляющие доступ к скорости мяча
int& Ball::xSpeed()
{
	return xspeed;
}

int& Ball::ySpeed()
{
	return yspeed;
}

//методы предоставляющие доступ к размерам и координатам мяча
int& Ball::ballSize()
{
	return size;
}

int& Ball::ballX()
{
	return x;
}

int& Ball::ballY()
{
	return y;
}