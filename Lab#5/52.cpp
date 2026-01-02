#include <iostream>
#include<locale.h>

int main()
{
	setlocale(0, "rus");
	int g[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			g[i][j] = 8 - (i - j) + j;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			g[i][j] = g[j][i];
		}
	}
		
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			std::cout << g[i][j]<<" ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Ёлементы главной диагонали" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << g[i][i] << " ";
	}
	return 0;

}