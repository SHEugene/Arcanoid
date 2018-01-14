#pragma once
#include <vector>
#include <fstream>
#include <string>
using namespace std;

#define SAVE_FILE_NAME "saveGame.txt"
class Field
{
private:
	vector<string> matrix;
public:
	Field(void);
	~Field(void);
	void createFromFile(string fName);
	void save();
	int rowsNumber();
	string operator[](int n); 
};

