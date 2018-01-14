#include "StdAfx.h"
#include "Ball.h"


Ball::Ball(int _fieldWidth, int _batY)
{
	size = SIZE;
	fieldWidth = _fieldWidth;
	batY = _batY;
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

int& Ball::xSpeed()
{
	return xspeed;
}

int& Ball::ySpeed()
{
	return yspeed;
}

void Ball::retToStartPos()
{
	y = batY-size;
	x = (fieldWidth + size)/2;
}