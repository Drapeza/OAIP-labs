#include <iostream>
#include <locale.h>

int main()
{
	setlocale(0, "rus");
	long long a[5], b[5];
	std::cout << "Введите массив" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		while (true)
		{
			if (std::cin >>a[i])
			{
				break;
			}

			else {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please, enter the number" << std::endl;
			}
		}
		b[i] = a[i];
		if (a[i] > 0) { a[i] *= a[i];}
		if (a[i] < 0) { a[i] *= 5; }
		std::cout << b[i] << " ";
	}
	std::cout<<std::endl<<"Новый массив"<<std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}

