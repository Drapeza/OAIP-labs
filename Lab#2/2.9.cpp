#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int choice,a,b;
	cout << "Введите числа" << '\n';
	cin >> a >> b;
	cout << "Выберете действие" << '\n'
		<< "1. a+b" << '\n'
		<< "2. abs(a-b)" << '\n'
		<< "3. a*b" << '\n'
		<< "4. a/b" << '\n'
		<< "5. b/a" << '\n';
	cin >> choice;
	switch (choice) {
	case 1: { cout << a + b; break; }
	case 2: { cout << abs(a - b); break; }
	case 3: { cout << a * b; break; }
	case 4: {
		float n;
		n =(float) a / b;
		cout << n; break;
	}
	case 5: {
	float n;
	n =(float) b / a;
	cout << n; break;
	}
	}
	return 0;
}
