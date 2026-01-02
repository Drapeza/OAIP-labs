/*Дана строка. Определить количество слов в исходной строке, начина
ющихся на заданную букву*/
#include <iostream>
#include <locale.h>
#include <string.h> 

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Введите символ" << std::endl;
	char a;
	int k = 0;
	std::cin >> a;
	std::cin.ignore();
	std::cout << "Введите строку" << std::endl;
	char str[100];
	std::cin.getline(str, 100);
	for (int i = 0; i < 99; i++)
	{
		if (isspace(str[i])) { if (str[i + 1] == a) { k++; } }
	}
	std::cout << k << std::endl;
	return 0;

}