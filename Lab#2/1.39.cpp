#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale (LC_ALL, "rus")
	double a, b, c;
	cout << "Введите числа" << '\n';
	cin >> a >> b >> c;
	if (a >= b && b >= c) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else { 
		a = abs(a);
		b = abs(b);
		c = abs(c);
	}
	cout << "Полученные числа" << a << " " << b << " " << c;
	return 0;
}