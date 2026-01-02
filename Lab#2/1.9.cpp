#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double m, n, p;
	cout << "Введите числа" << '\n';
	int k = 0;
	cin >> m >> n >> p;
	if (m < 0) { k++; }
	if (n < 0) { k++; }
	if (p < 0) { k++; }
	cout << "Количество отрицательных чисел:" << '\n' << k;
	return 0;
}