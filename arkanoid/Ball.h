#pragma once
#define SIZE 15 //размер м€ча
#define MIN_POS 0
#define SPEED 0
class Ball
{
public:
	Ball(int _fieldWidth, int _batY);
	virtual ~Ball(void);

	void retToStartPos(); //задать м€чу начальные координаты по центру на ракетке

	void move(); //предвинуть м€ч в зависимости от скорости

	//методы предоставл€ющие доступ к скорости м€ча
	int& xSpeed();
	int& ySpeed();	

	//методы предоставл€ющие доступ к размерам и координатам м€ча
	int& ballSize();
	int& ballX();
	int& ballY();

private:
	int x, y;				//координаты м€ча
	int xspeed, yspeed;		//скороть м€ча по х и у
	int size;				//размеры м€ча
	int fieldWidth, batY;
};

