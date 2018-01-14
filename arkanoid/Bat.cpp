#include "StdAfx.h"
#include "Bat.h"


Bat::Bat(int _fieldWidth)
{
	fieldWidth = _fieldWidth;
	width = NARROW;
	height = HEIGHT_B;
	x = (fieldWidth - NARROW)/2;
	y = Y_B;
}


Bat::~Bat(void)
{

}


void Bat::moveLeft()
{
	if (x > MIN_POS)
	{
		x -= STEP;
	}
	else
	{
		x = MIN_POS;
	}
}

void Bat::moveRight()
{
	if (x < fieldWidth-width)
	{
		x += STEP;
	}
	else
	{
		x = fieldWidth-width;
	}
}

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

void Bat::retToStartPos()
{
	x = (fieldWidth - NARROW)/2;
	y = Y_B;
}

double Bat::collisionBat(int& a, int& b, int size)
{
	double ctg = -2.0;
	if (y <= b + size && (x-a > -width &&  x-a < size))
	{
		b = y-size; 
		ctg = (a + size/2 - (x + width/2))/(double)size;
	}
	return ctg;
}