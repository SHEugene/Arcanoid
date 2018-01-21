#pragma once
#define NARROW 70 //������ ����� �������
#define BAT_HEIGHT 15 //������ �������
#define MIN_POS 0 //����������� ������� �����
#define STEP 25 //��� ������������
#define BAT_Y 405 //��������� �� ���� �� y
#define NO_BAT_COLLISION -100

class Bat
{
public:
	Bat(int _fieldWidth);
	virtual ~Bat(void);

	void retToStartPos(); //������ ������� ��������� ���������� �� ������

	//���������� ������� ����� ��� � �����
	void moveLeft();
	void moveRight();
	
	//�������� �� ������������ � ���������� �����
	double collisionBat(int& x, int& y, int size);

	//������ ��������������� ������ � �������� � ����������� �������
	int& batWidth();
	int& batHeight();
	int& batX();
	int& batY();
private:
	int fieldWidth;		//������ ����
	int width, height;	//������� �������
	int x, y;			//���������� �������
};

