#include "StdAfx.h"
#include "Bat.h"

//конструктор использует ширину поля и инициализирует поля класса
Bat::Bat(int _fieldWidth)
{
	fieldWidth = _fieldWidth;
	width = NARROW;
	height = BAT_HEIGHT;
	retToStartPos();
}


Bat::~Bat(void)
{

}

//задать ракетку начальные координаты по центру
void Bat::retToStartPos()
{
	x = (fieldWidth - NARROW)/2;
	y = BAT_Y;
}

//предвинуть ракетку влево
void Bat::moveLeft()
{
	//если ракетка не вызодит за пределы поля
	if (x-STEP > MIN_POS)
	{
		x -= STEP; //двигаем влево
	}
	else
	{
		x = MIN_POS;
	}
}

//предвинуть ракетку вправо
void Bat::moveRight()
{
	//если ракетка не вызодит за пределы поля
	if (x+STEP < fieldWidth-width)
	{
		x += STEP; //двигаем вправо
	}
	else
	{
		x = fieldWidth-width; //задаем крайнее правое положение
	}
}

//проверка на столкновение и нахождение точки
double Bat::collisionBat(int& a, int& b, int size)
{
	double ctg = NO_BAT_COLLISION;
	//проверка на столкновение
	if (y <= b + size && (x-a >= -width &&  x-a <= size))
	{
		b = y-size; 
		//нахождение параметра столкновения в зависимости от точки
		ctg = (a + size/2 - (x + width/2))/(double)size; 
	}
	return ctg;
}

//методы предоставляющие доступ к размерам и координатам ракетки
int& Bat::batWidth()
{
	return width;
}

int& Bat::batHeight()
{
	return height;
}

int& Bat::batX()
{
	return x;
}

int& Bat::batY()
{
	return y;
}