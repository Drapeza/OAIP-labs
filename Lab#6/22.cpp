#include <iostream>
#include <locale.h>

int main()
{
	
	setlocale(0, "rus");
	std::cout << "ВВедите размер массива" << std::endl;
	int n;
	while (true)
	{
		if (std::cin >> n)
		{
			if (n > 0) { break; }
		}
		else
			std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Please, enter the number" << std::endl;
	}

	int* a = new int[n], s = 0,k=0,p,l;
	for (int i = 0; i <n; i++)
	{
		while (true)
		{
			if (std::cin >> a[i])
			{
				break; 
			}
			else
				std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please, enter the number" << std::endl;
		}

		if (i % 2 == 0 && i!=0) { s += a[i]; }
		if (a[i] > 0) { k++; }
		if (k == 1) { p = i; }
	}
	std::cout << "Сумма равна: " << s << std::endl;
	if (k == 0) { std::cout << "Нет положительных" << std::endl; return 0; }

	for (int i = n - 1;; i--)
	{
		if (a[i] > 0) { l = i; break; }
	}

	int pr = 1;
	for (int i = p ; i < l; i++)
	{
		pr *= a[i];
	}

	std::cout << "Произведение равно: " << pr << std::endl;
	delete []a;
	return 0;
}