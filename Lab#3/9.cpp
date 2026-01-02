#include <iostream>

int main()
{
double r, m;
int k = 0;
	while (true)
	{
		if (std::cin>>r>>m){
			
				break;
		}

		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error, please write down the number" << std::endl;
		}
	}

	if (r > m) { std::cout << "ERROR" << std::endl; return 0; }
	if (r <= 0.0 || m <= 0.0) { std::cout << "ERROR" << std::endl; return 0; }

	while (r < m) {
		r *= 1.04;
		k++;
	}
	std::cout << k <<std::endl;
	return 0;
}