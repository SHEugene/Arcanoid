#include "StdAfx.h"
#include "Field.h"

//конструктор класса - инициализирует переменн≥е и таблицу очков
Field::Field(void)
{
	score = 0;
	fWidth = WIDTH;
	scoreTable.insert(pair<char, int>('R', 4));
	scoreTable.insert(pair<char, int>('Y', 3));
	scoreTable.insert(pair<char, int>('G', 2));
	scoreTable.insert(pair<char, int>('B', 1));
	scoreTable.insert(pair<char, int>('C', 50));
	scoreTable.insert(pair<char, int>('D', 25));
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

//сохранение матрицы в файл
void Field::save()
{
	ofstream fout;
	//загрузка уровн€ в файл
	fout.open(SAVE_FIELD_NAME);
	int rows = matrix.size();
	for(int i = 0; i < rows-1; i++)
	{
		fout << matrix[i] << endl;
	}
	fout << matrix[rows-1];
	fout.close();
}

//проверка на столкновение объекта с кра€ми пол€
int Field::collisionWalls(int& x, int& y, int size)
{
	int wall = 0;
	if (x + size >= WIDTH) //правый край
	{
		wall = 1;
		x = WIDTH-size;
	}
	if (x <= MIN_POS) //левый край
	{
		wall = 3;
		x = MIN_POS;
	}
	if (y <= MIN_POS) //верхний край
	{
		wall = 2;
		y = MIN_POS;
	}
	if (y >= HEIGHT) //нижний край
	{
		wall = 4;
	}
	return wall;
} 

//проверка на столкновение объекта с кра€ми блоков
vector<int> Field::collisionBlocks(int &x, int &y, int size, int &board)
{
	vector<int> result;
	result.clear();
	
	board = 0;
	int row, col;
	int num;

	//вычислить с какой стороны было столкновение с блоком и было ли вообще
	if (num = checkBoard(x, y, x+size, y, row, col) && (row+1 == matrix.size() ? true : (matrix[row+1][col] == '0' ? true : false)))
	{   //снизу
		board = 2;
		y = (row+1)*BLOCK_HEIGHT;
	}
	else if (num = checkBoard(x, y+size, x+size, y+size, row, col) && matrix[row-1][col] == '0')	
	{	//сверху
		board = 4;
		y = (row)*BLOCK_HEIGHT-size;
	}
	else if (num = checkBoard(x, y, x, y+size, row, col) && matrix[row][col+1] == '0')	
	{	//справа
		board = 1;
		x = (col+1)*BLOCK_WIDTH;
	}
	else if (num = checkBoard(x+size, y, x+size, y+size, row, col) && matrix[row][col-1] == '0')	
	{	//слева
		board = 3;
		x = (col)*BLOCK_WIDTH-size;
	}

	if (board) //если столкеновение было
	{		
		//создать результирущий вектор
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
		
		applyCollision(result); //применить результаты столкновени€ к полю
	}
	return result;
}

//проверка просты ли все €чейки пол€
bool Field::isEmpty()
{
	bool result = true;
	for (int i = 0; i < matrix.size(); i++)
	{
		if (matrix[i] != "0000000000000")
		{
			result = false;
			break;
		}
	}
	return result;
}

//дл€ доступа к матрици через []
string Field::operator[](int n)
{
	string result = "";
	if (n <= matrix.size())
	{
		result = matrix[n];
	}
	return result;
}

//возвращает колицество строк матрицы
int Field::rowsNumber()
{
	return matrix.size();
}

//методы предоставл€ющие доступ к ширине пол€ и очкам набранным
int& Field::scores()
{
	return score;
}

int&  Field::width()
{
	return fWidth;
}

//проаерить коснулс€ ли объект блока и соседнему к нему
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

//применить результаты столкновени€ к полю
void  Field::applyCollision(vector<int>& index)
{
	for(unsigned int i = 0; i < index.size(); i+=2)
	{
		int a = index.size();
		char bl = matrix[index[i]][index[i+1]];
		if (bl != 'O' && bl != 'A')
		{
			score += scoreTable.find(matrix[index[i]][index[i+1]])->second;
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


     

