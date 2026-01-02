#include <iostream>
#include <locale.h>

void fn(int** a, int n);


int main()
{
	setlocale (LC_ALL, "rus");
	int n;
	std::cout << "Введите размер матрицы" << std::endl;
	while (true)
	{
		if (std::cin >> n)
		{
			if (n > 0)break;
		}
		else
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>:: max(), '\n');
			std::cout << "Пожалуйста, введите корректное число" << std::endl;
	}

	int** a =new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	std::cout << "Введите элементы матрицы " << n<<std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			while (true)
			{
				if (std::cin >> a[i][j])
				{
					break;
				}
				else
					std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Пожалуйста, введите корректное число" << std::endl;
			}
		}
	}

	fn(a, n);

	std::cout << "Полученная матрица: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i][j]<<" ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
		a[i] = nullptr;
	}
	delete[] a;
	a = nullptr;
	return 0;
}

void fn(int** a, int n)
{
	int mx = a[0][0], mn = a[0][0], im = -1, jm = -1, in = -1, jn = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > mx) {
				mx = a[i][j]; im = i; jm = j;
			}
			if (a[i][j] < mn) {
				mn = a[i][j]; in = i; jn = j;
			}
		}
	}
	int c = a[im][jm];
	a[im][jm] = a[in][jn];
	a[in][jn] = c;
}
