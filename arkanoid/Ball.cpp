#include "StdAfx.h"
#include "Ball.h"


Ball::Ball(int _fieldWidth, int batY)
{
	size = SIZE;
	fieldWidth = _fieldWidth;
	y = batY-size;
	x = (fieldWidth + size)/2;
	xspeed = yspeed = SPEED;
}


Ball::~Ball(void)
{
}

void Ball::move()
{
	y += yspeed;
	x += xspeed;
}

int Ball::collisionTest(int x1, int y1, int x2, int y2)
{ 
	int coll=0;  
	if ((x + xspeed + size >= x1
		&& x + xspeed - size <= x2)
		&& (y + yspeed + size >= y1
		&& y + yspeed - size <= y2))
	{             
	if (x + size < x1 &&
	x + xspeed + size >= x1)             
	coll|=1;
	if (x - size > x2 &&
	x + xspeed - size <= x2)                                         
	coll|=1;
	if (y + size < y1&&
	y + yspeed + size >= y1)             
	coll|=2;                     
	if (y - size > y2 &&
	y + yspeed - size <= y2)             
	coll|=2;                                              
	}
	return coll;
}


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