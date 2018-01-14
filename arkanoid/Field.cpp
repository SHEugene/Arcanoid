#include "StdAfx.h"
#include "Field.h"


Field::Field(void)
{
}


Field::~Field(void)
{
}

//заполнение матирицы из файла
void Field::createFromFile(string fName)
{
	ifstream fin;
	string temp = "";
	//загрузка уровней из файла
	fin.open(fName);
	while (!fin.eof())
	{
		fin >> temp;
		matrix.push_back(temp);
	}
	fin.close();
}

int Field::rowsNumber()
{
	return matrix.size();
}

string Field::operator[](int n)
{
	string result = "";
	if (n <= matrix.size())
	{
		result = matrix[n];
	}
	return result;
}

//сохранение игры
void Field::save()
{
	ofstream fout;
	//загрузка уровня в файл
	fout.open(SAVE_FILE_NAME);
	int rows = matrix.size();
	for(int i = 0; i < rows; i++)
	{
		fout << matrix[i] << endl;
	}
	fout.close();
}

vector<int> Field::collisionBlocks(int &x, int &y, int size, int &board)
{
	vector<int> result;
	result.clear();
	//расчитать номера блоков рядом с которыми находится шар
	board = 0;
	int row, col;
	int num;
	if (num = checkBoard(x, y, x+size, y, row, col))
	{
		board = 2;
		y = (row+1)*BLOCK_HEIGHT;
	}
	else if (num = checkBoard(x, y+size, x+size, y+size, row, col))	
	{
		board = 4;
		y = (row)*BLOCK_HEIGHT-size;
	}
	else if (num = checkBoard(x, y, x, y+size, row, col))	
	{
		board = 1;
		x = (col+1)*BLOCK_WIDTH;
	}
	else if (num = checkBoard(x+size, y, x+size, y+size, row, col))	
	{
		board = 3;
		x = (col)*BLOCK_WIDTH-size;
	}
	if (num)
	{		
		result.push_back(row);
		result.push_back(col);
		if (num == 2)
		{
			if (board%2 == 0)
			{
				result.push_back(row);
				result.push_back(col+1);
			}
			else
			{
				result.push_back(row+1);
				result.push_back(col);
			}			
		}
		applyCollision(result);
	}
	return result;
}

void  Field::applyCollision(vector<int>& index)
{
	for(int i = 0; i < index.size(); i+=2)
	{
		int a = index.size();
		char bl = matrix[index[i]][index[i+1]];
		if (bl != 'O' && bl != 'A')
		{
			matrix[index[i]][index[i+1]] = '0';
		}
		else      
		{
			if (bl == 'O') matrix[index[i]][index[i+1]] = 'C';
			if (bl == 'A') matrix[index[i]][index[i+1]] = 'D';
			index.erase(index.begin()+i, index.begin()+i+2);
			int b = index.size();
			i-=2;
		}
	}
}

int Field::checkBoard(int x, int y, int x1, int y1, int &row, int &col)
{
	int result = 0;
	row = y/BLOCK_HEIGHT;
	if (row < matrix.size())
	{
		col = x/BLOCK_WIDTH;
		if (col < matrix[row].length() && matrix[row][col] != '0')
		{
			result++;
		}
		if (col+1 < matrix[row].length() && x1 >= (col+1)*BLOCK_WIDTH)
		{
			if (matrix[row][col+1] != '0')
			{
				if (!result) col++;
				result++;
			}
		}
		else if (row+1 < matrix.size() && y1 >= (row+1)*BLOCK_HEIGHT)
		{
			if (col < matrix[row].length() && matrix[row+1][col] != '0')
			{
				if (!result) row++;
				result++;
			}
		}
	}
	return result;
}

int Field::collisionWalls(int& x, int& y, int size)
{
	int wall = 0;
	if (x + size >= WIDTH)
	{
		wall = 1;
		x = WIDTH-size;
	}
	if (x <= MIN_POS)
	{
		wall = 3;
		x = MIN_POS;
	}
	if (y <= MIN_POS)
	{
		wall = 2;
		y = MIN_POS;
	}
	if (y >= HEIGHT)
	{
		wall = 4;
	}
	return wall;
}           