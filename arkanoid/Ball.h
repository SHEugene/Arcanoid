#pragma once
#define SIZE 15
#define MIN_POS 0
#define SPEED 20
#define Y 405
class Ball
{
public:
	Ball(int _fieldWidth, int batY);
	~Ball(void);
	void move();
	int collisionTest(int x1, int y1, int x2, int y2);
	int& ballSize();
	int& ballX();
	int& ballY();
private:
	int x, y;
	int xspeed, yspeed;
	int size;
	int fieldWidth;
};

