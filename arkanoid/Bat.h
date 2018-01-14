#pragma once
#define NARROW 70
#define WIDE 110
#define HEIGHT_B 15
#define MIN_POS 0
#define STEP 30
#define Y_B 405

class Bat
{
public:
	Bat(int _fieldWidth);
	~Bat(void);
	int& batWidth();
	int& batHeight();
	int& batX();
	int& batY();
	void moveLeft();
	void moveRight();
	void retToStartPos();
	double collisionBat(int& x, int& y, int size);
private:
	int fieldWidth;
	int width;
	int height;
	int x, y;
};

