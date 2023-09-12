//номер 1 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int rows = 5;
	const int cols = 5;
	int rates[rows][cols];
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < cols; x++)
		{
			rates[y][x] = 0;
			if (x == 0) 
				rates[y][x] = 1;
			if (y == 0)
				rates[y][x] = 1;
			if (x == 4)
				rates[y][x] = 1;
			if (y == 4)
				rates[y][x] = 1;
			cout << rates[y][x];
		}
		cout << "\n";
	}

}

//номер 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int rows = 10;
	const int cols = 10;
	int rates[rows][cols];
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < cols; x++)
		{
			rates[y][x] = 0;
			if (x == y or x == 9 - y)
				rates[y][x] = 1;
			cout << rates[y][x];
		}
		cout << "\n";
	}

}
