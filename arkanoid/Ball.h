#pragma once
#define SIZE 15
#define MIN_POS 0
#define SPEED 0
class Ball
{
public:
	Ball(int _fieldWidth, int _batY);
	~Ball(void);
	void move();	
	int& ballSize();
	int& ballX();
	int& ballY();
	int& xSpeed();
	int& ySpeed();
	void retToStartPos();
private:
	int x, y;
	int xspeed, yspeed;
	int size;
	int fieldWidth, batY;
};

