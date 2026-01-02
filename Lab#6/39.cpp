#include <iostream>
#include <locale.h>

int main()
{
	setlocale(0, "rus");
	std::cout << "Введите размер матрицы n*m" << std::endl;
	int n, m;
	while (true)
	{
		if (std::cin >> n >> m)
		{
			if (n > 0 && m > 0) { break; }
		}
		else
			std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>:: max(), '\n');
		std::cout << "Please, enter the number" << std::endl;
	}
	std::cout << "Введите элементы матрицы" << std::endl;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	int** b = new int* [n];
	for (int i = 0; i < n; i++)
	{
		b[i] = new int[m];
	}

	

	for (int i = 0; i < n; i++)// ввод массива
	{
		for (int j = 0; j < m; j++)
		{
			while (true)
			{

				if (std::cin >> a[i][j])//
				{
					break;
				}
				else
					std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please, enter the number" << std::endl;
			}
		}
	}


		int* h = new int[m]; // ввели массив характеристик столбцов
		int* sum_el = new int[m];// массив для нахождения суммы всех элементов столбца, где есть -значение

		for (int j = 0; j < m; j++)
		{
			int s = 0,sum=0;
			for (int i = 0; i < n; i++)// двигаемся по строкам вниз(вниз столбца)
			{
				sum += a[i][j];
				if (a[i][j] < 0 && abs(a[i][j]) % 2 == 1) { s += abs(a[i][j]);  }
			}
			h[j] = s;
			if (s != 0) { sum_el[j] = sum; }// вычисляем сумму элементов столбца 
			else { sum_el[j] = 0; }
		}

		
		
		for (int i = 0; i < m; i++)
		{
			int mx = 0, ind = -1; //с помощью мх будем переставлять столбцы

			for (int j = 0; j < m; j++)
			{
				if (h[j] > mx) { mx = h[j]; ind = j;  }// находим индекс столбца с макс хар-ой
			}
			if (ind == -1) break;
			if (ind != -1) { h[ind] = 0; }
			for (int l = 0; l < n; l++)// переставляем стобцы местами( текущий с теперешним максимальным
			{
				b[l][i] = a[l][ind];
			}
		}

		std::cout << std::endl;
		std::cout << "Массив" << std::endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << b[i][j] << " ";
			}
			std::cout << std::endl;
		}

		for (int i = 0; i < m; i++)
		{
			if (sum_el[i] != 0) {
				std::cout << "Сумма элементов столбца " << i << " : " << sum_el[i]<<std::endl;
			}
		}

		for (int i = 0; i < n; i++)
		{

			delete[] a[i];
		}
		delete[] a;

		for (int i = 0; i < n; i++)
		{

			delete[] b[i];
		}
		delete[] b;

		delete[] h;
		delete[] sum_el;
	
	return 0;
}