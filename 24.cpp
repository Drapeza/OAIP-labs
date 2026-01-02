#include <iostream>

int main()
{
	int n;
	
	while (true)
	{
		if (std::cin >> n) {
			break;
		}

		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error, please write down the number" << std::endl;
		}
	}
	int a[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

	int c = 0,n2=n;

	for (int i = 1;; i++)
	{
		c++;
		n2 /= 10;
		if (n2== 0) { break; }
	}
	
	for (int i = 0; i < c; i++)
	{
		int k;
		k = n % 10;
		a[k]++;
		n /= 10;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (a[i] >=0) {
			std::cout << i << "-" << a[i] + 1 << std::endl;
		}
	}
	return 0;
}
