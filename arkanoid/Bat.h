#pragma once
#define NARROW 70
#define WIDE 110
#define HEIGHT 15
#define MIN_POS 0
#define STEP 20
#define Y 405

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
private:
	int fieldWidth;
	int width;
	int height;
	int x, y;
};

