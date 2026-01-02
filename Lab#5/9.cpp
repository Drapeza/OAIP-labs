#include <iostream>
#include <locale.h>

void proizv(int** a, int n,int i);
void max(int** a, int i);

int main()
{
	setlocale(0, "rus");

	int n;
	std::cout << "¬ведите размер массива" << std::endl;
	while (true)
	{
		if (std::cin >>n)
		{
			if (n > 0) { break; }
			std::cout << "Please, enter the number" << std::endl;
		}

		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please, enter the number" << std::endl;
		}
	}
	int** a = new int* [n];//создание массива
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)// ввод массива
	{
		for (int j = 0; j < n; j++)
		{
			while (true)
			{
				if (std::cin >> a[i][j])
				{
					break;
				}

				else {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Please, enter the number" << std::endl;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)//нахождение произведени€ строк
	{
		int f = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i][j] < 0) { f++; }
		}
		if (f == 0) { std::cout << "ѕроизведение в строке #" << i<<std::endl; proizv(a, n, i); }
	}
	std::cout << "ћаксимальна€ диагональ равна: " << std::endl;
	max(a,n);
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
		a[i] = nullptr;
	}
	delete[] a;
	a = nullptr;
}

void proizv(int** a, int n, int i)// процедура вычислени€ произведени€
{
	int p = 1;
	for (int j = 0; j < n; j++)
	{
		p *= a[i][j];
	}
	std::cout << p << std::endl;
}

void max(int** a, int n)// вычислени€ главной диагонали
{
	int mx = a[0][n - 2] + a[1][n - 1];
	
	for(int k=1;k<n-1; k++)
	{
		int s = 0;
		for (int i = 0, j=k; i < n - 1,j<n; i++,j++)
		{
			s += a[i][j];
		}
		if(s > mx) { mx = s; }
	}

	for (int k = n-1; k >0; k--)
	{
		int s = 0;
		for (int i = n-1, j = k; i > 0, j <=0; i--, j--)
		{
			s += a[i][j];
		}
		if (s > mx) { mx = s; }
	}
	std::cout << mx << std::endl;
}