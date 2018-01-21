#pragma once
#define NARROW 70 //ширина узкой ракетки
#define BAT_HEIGHT 15 //высота ракетки
#define MIN_POS 0 //минимальная позиция слева
#define STEP 25 //шаг передвижения
#define BAT_Y 405 //положение на поле по y
#define NO_BAT_COLLISION -100

class Bat
{
public:
	Bat(int _fieldWidth);
	virtual ~Bat(void);

	void retToStartPos(); //задать ракетке начальные координаты по центру

	//предвинуть ракетку влево или в право
	void moveLeft();
	void moveRight();
	
	//проверка на столкновение и нахождение точки
	double collisionBat(int& x, int& y, int size);

	//методы предоставляющие доступ к размерам и координатам ракетки
	int& batWidth();
	int& batHeight();
	int& batX();
	int& batY();
private:
	int fieldWidth;		//ширина поля
	int width, height;	//размеры ракетки
	int x, y;			//координаты ракетки
};

