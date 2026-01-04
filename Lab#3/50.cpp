#include <iostream>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "rus");
    double n, m, s = 0, f = 1, a = 0, b = 1, y = 0, x = 0, S = 0, k = 1;
    std::cout << std::endl << "Введите числа m и n " << std::endl;
    while (true)
    {
        if (std::cin >> m >> n) {
            if (m < n) { break; }
            std::cout <<"ERROR"<<std::endl;
        }

        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error, please write down the number" << std::endl;
        }
    }
    int nom;
    std::cout << std::endl << "Введите номер случая" << std::endl;
    std::cin >> nom;
    while(nom!=0)
    {
        switch (nom)
        {
        case 1:
            for (int i = 1; i <= n; i++) {
                s = s + i;
            }; std::cout << s<<std::endl; break;
        case 2:
            for (int i = 1; i <= n; i++) {
                f = f * i;
            }; std::cout << f << std::endl; break;
        case 3:
            for (int i = m; i <= n; i++) {
                a = a + i;
            }; std::cout << a << std::endl; break;
        case 4:
            for (int i = m; i <= n; i++)
            {
                b = b * i;
            }; std::cout << b << std::endl; break;
        case 5:

            for (int i = 1; i <= n; i++) {
                y = y + (1.0 / i);
            }; std::cout << y << std::endl; break;
        case 6:
            for (int i = m; i <= n; i++) {
                x = x + (1.0/ i);
            }; std::cout << x << std::endl; break;
        case 7:
            for (int i = 1; i <= n; i++) {
                k = k * i;
                S = S + k;
            }; std::cout <<S << std::endl; break;
        }
        std::cout <<std::endl<< "Введите следующий номер случая" << std::endl;
        std::cin >> nom;
    }
    return 0;
}
