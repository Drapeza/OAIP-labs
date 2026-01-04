#include <iostream>
#include <limits>
#include <locale.h>

int main()
{
    setlocale(0, "rus");
    std::cout << "Введите размер массива" << std::endl;
    int n;
    double s = 0, p = 1;

    while (true)
    {
        if (std::cin >> n) {
            if (n > 0) break;
            else std::cout << "Error, please write down the positive number" << std::endl;
        }
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error, please write down the number" << std::endl;
        }
    }
    std::cout << "Введите массив" << std::endl;
    double* a = new double[n];

    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            if (std::cin >> a[i]) break;
            else {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error, please write down the number" << std::endl;
            }
        }
        s += a[i];
        p *= a[i];
    }

    double mx = a[0], mn = a[0];
    int n_mx = 0, n_mn = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx) { mx = a[i]; n_mx = i; }
        if (a[i] < mn) { mn = a[i]; n_mn = i; }
    }

 
   
    a[n_mx] = mn;
    a[n_mn] = mx;

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl<<"Сумма "<<s << " " <<"Произведение " << p << std::endl;

    delete[] a;
    return 0;
}
