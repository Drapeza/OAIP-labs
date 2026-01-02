#include <iostream>
#include <locale.h>


int main()
{
	setlocale(0, "rus");
	std::cout << "Введите размер массива" << std::endl;
	int n;
	while (true)
	{
		if (std::cin >> n) {
			if (n > 0) break;
			std::cout << "Write down the positive number" << std::endl;
		}

		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please, write down the number" << std::endl;
		}
	}

	double *a = new double[n];
	int n_mx=0;
	double s = 0, p = 1,k=0;

	std::cout << "Введите массив" << std::endl;
	for (int i = 0; i < n; i++)
	{
		while (true)
		{
			if (std::cin >> a[i]) {
				break;
			}

			else {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please, write down the number" << std::endl;
			}
		}
		if (a[i] < 0) { p *= a[i]; k++; }
	}

	int mx = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mx) { n_mx = i; }
	}
	
	for (int i = 0; i < n_mx; i++)
	{
		if (a[i] > 0) { s += a[i]; }
	}

	delete[]a;

	if (k) { std::cout << p << " " << s << std::endl; }
	else { std::cout << "Нет отрицаательных элементов" << " " << s << std::endl; }
	return 0;
}