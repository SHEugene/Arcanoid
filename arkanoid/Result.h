#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#define FOLDER "results/"
#define RES_N 5
class Result
{
public:
	Result();
	Result(int level);

	virtual ~Result(void);

	void add(string name, int gTime); //�������� ����� � ������� �����������
	bool isRecord(int gTime); //������ �� ����� � ������

	string getName(int i); //��� �� ��������� �������
	int getTime(int i); //����� �� ��������� �������
	int getLines(){return RES_N;} //���������� �����������
private:
	string names[RES_N]; //������ ����
	int times[RES_N]; //������ �������
	string fName; //��� �����
	
	void writeToFile(); //�������� � ���� ����������� ������
	void readFromFile(); //�������� ����������� ������ �� �����
};

