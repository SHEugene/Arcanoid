#include "StdAfx.h"
#include "Ball.h"

//����������� ���������� ������ ����, � ������� � �������������� ���� ������
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

//������ ���� ��������� ���������� �� ������ �� �������
void Ball::retToStartPos()
{
	y = batY-size;
	x = (fieldWidth + size)/2;
}

//���������� ��� � ����������� �� ��������
void Ball::move()
{
	y += yspeed;
	x += xspeed;
}

//������ ��������������� ������ � �������� ����
int& Ball::xSpeed()
{
	return xspeed;
}

int& Ball::ySpeed()
{
	return yspeed;
}

//������ ��������������� ������ � �������� � ����������� ����
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