#pragma once
#define SIZE 15 //������ ����
#define MIN_POS 0
#define SPEED 0
class Ball
{
public:
	Ball(int _fieldWidth, int _batY);
	virtual ~Ball(void);

	void retToStartPos(); //������ ���� ��������� ���������� �� ������ �� �������

	void move(); //���������� ��� � ����������� �� ��������

	//������ ��������������� ������ � �������� ����
	int& xSpeed();
	int& ySpeed();	

	//������ ��������������� ������ � �������� � ����������� ����
	int& ballSize();
	int& ballX();
	int& ballY();

private:
	int x, y;				//���������� ����
	int xspeed, yspeed;		//������� ���� �� � � �
	int size;				//������� ����
	int fieldWidth, batY;
};

