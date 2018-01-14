#include "StdAfx.h"
#include "Bat.h"


Bat::Bat(int _fieldWidth)
{
	fieldWidth = _fieldWidth;
	width = NARROW;
	height = HEIGHT;
	x = (fieldWidth - NARROW)/2;
	y = Y;
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
}

void Bat::moveRight()
{
	if (x < fieldWidth-width)
	{
		x += STEP;
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