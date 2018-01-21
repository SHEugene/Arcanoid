#include "StdAfx.h"
#include "Bat.h"

//����������� ���������� ������ ���� � �������������� ���� ������
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

//������ ������� ��������� ���������� �� ������
void Bat::retToStartPos()
{
	x = (fieldWidth - NARROW)/2;
	y = BAT_Y;
}

//���������� ������� �����
void Bat::moveLeft()
{
	//���� ������� �� ������� �� ������� ����
	if (x-STEP > MIN_POS)
	{
		x -= STEP; //������� �����
	}
	else
	{
		x = MIN_POS;
	}
}

//���������� ������� ������
void Bat::moveRight()
{
	//���� ������� �� ������� �� ������� ����
	if (x+STEP < fieldWidth-width)
	{
		x += STEP; //������� ������
	}
	else
	{
		x = fieldWidth-width; //������ ������� ������ ���������
	}
}

//�������� �� ������������ � ���������� �����
double Bat::collisionBat(int& a, int& b, int size)
{
	double ctg = NO_BAT_COLLISION;
	//�������� �� ������������
	if (y <= b + size && (x-a >= -width &&  x-a <= size))
	{
		b = y-size; 
		//���������� ��������� ������������ � ����������� �� �����
		ctg = (a + size/2 - (x + width/2))/(double)size; 
	}
	return ctg;
}

//������ ��������������� ������ � �������� � ����������� �������
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