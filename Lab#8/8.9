#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>

struct patient {
    char fam[50];
    char name[50];
    char otch[50];
    char adress[50];
    int card;
    int pol;
};

struct patient p[30];
struct patient tmp;
int kol = 0;

int menu();
void enter_new();
void out();
void del();
void change();
void find();
void sort();

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    while (1)
    {
        switch (menu())
        {
        case 1: enter_new(); break;
        case 2: sort(); break;
        case 3: find(); break;
        case 4: change(); break;
        case 5: del(); break;
        case 6: out(); break;
        case 7: return 0;
        default: std::cout << "Неверный выбор/n";
        }
    }
}

void enter_new() {
    if (kol < 30) {
        std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
        std::cout << "Пациент номер #" << kol + 1<<'\n';
        std::cin.ignore();

        std::cout << "Фамилия: ";
        std::cin.getline(p[kol].fam, 50);

        std::cout << "Имя: ";
        std::cin.getline(p[kol].name, 50);

        std::cout << "Отчество: ";
        std::cin.getline(p[kol].otch, 50);

        std::cout << "Домашний адрес : ";
        std::cin.getline(p[kol].adress, 50);

        std::cout << "Номер карты: ";
        while (true) {
            if (std::cin >> p[kol].card && p[kol].card > 0)break;
            else {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Введите корректное значение" << std::endl;
            }
        }
        std::cin.ignore();

        std::cout << "Полис: ";
        while (true) {
            if (std::cin >> p[kol].pol && p[kol].pol > 0)break;
            else {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Введите корректное значение" << std::endl;
            }
            std::cin.ignore();
        }

        std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
        kol++;
    }
    
    else
        std::cout << "Введено максимальное кол–во пациентов";
}
int menu() {
    int choice;
    std::cout << "--------------Введите номер необходимого действия:-------------\n";
    std::cout << "1 – ввод нового пациента\n";
    std::cout << "2 – сортировка по заданному параметру\n";
    std::cout << "3 – поиск по заданному параметру\n";
    std::cout << "4 – изменение данных  пациента\n";
    std::cout << "5 – удаление пациента \n";
    std::cout << "6 – список пациентов\n";
    std::cout << "7 – выход";
    std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
    while (true) {
        if (std::cin >> choice && choice > 0 && choice <=7)break;
        else {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Введите корректное значение" << std::endl;
        }
    }
    return choice;
}
void out()
{
    int sw;
    if (kol == 0)
        std::cout << "\nНет пациентов:\n";
    else
    {
        std::cout << "\nВведите:\n";
        std::cout << "1 – вывести определенного пациента\n";
        std::cout << "2 – вывести всех пациентов\n";
        std::cin >> sw;
        if (sw == 1)
        {
            std::cout << "Введите фамилию пациента, которого нужно вывести\n";
            char searchFam[50];
            std::cin.ignore();
            std::cin.getline(searchFam, 50);
            int f = 0;
            for (int i = 0; i < kol; i++)
            {
                if (strcmp(p[i].fam, searchFam) == 0) {
                    std::cout
                        << "----------------------Пациент  #" << i + 1<<"---------------------------" << std::endl;
                    std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                        << " Адрес: " << p[i].adress << " " << std::endl
                        << " Карта: " << p[i].card << std::endl
                        << " Полис: " << p[i].pol << std::endl;
                    std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
                    f = 1;
                }
            }
            if (f == 0) 
                std::cout << "Данный пациент не найден" << std::endl;
        }
        if (sw == 2) {
            std::cout << std::endl << "-------------------Список всех пациентов-------------------" << std::endl;
            for (int i = 0; i < kol; i++) {
                std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                    << " Адрес: " << p[i].adress << " " << std::endl
                    << " Карта: " << p[i].card << std::endl
                    << " Полис: " << p[i].pol << std::endl;
                std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
            }
        }
    }
}
void del() {
    int nom;
    std::cout << "\nВведите номер карты пациента, которого необходимо удалить\n";
    std::cout << "Если необходимо удалить все записи, введите '99'\n";
    while (true) {
        if (std::cin >> nom && nom > 0)break;
        else {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Введите корректное значение" << std::endl;
        }
    }
    if (nom != 99) {
        int f = 0; int k = -1;
        for (int i = 0; i < kol; i++)
        {
            if (p[i].card == nom) {
                std::cout << "Пациент  #" << i + 1 << std::endl;
                std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                    << " Адрес: " << p[i].adress << " " << std::endl
                    << " Карта: " << p[i].card << std::endl
                    << " Полис: " << p[i].pol << std::endl;
                std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
                f = 1; k = i;
            }
        }
        if (f == 0) {
            std::cout << "Данный пациент не найден" << std::endl;
        }
        for (int i =k; i < kol; i++) 
            p[i] = p[i + 1]; 
        kol--;
    }
    if (nom == 99)
    {
        for (int i = 0; i < 30; i++)
            p[i] = tmp;
        kol = 0;
    }

}
void change()
{
    int k;
    int choice;
    std::cout << "Введите фамилию пациента, данные которого нужно изменить\n";
    char searchFam[50];
    std::cin.ignore();
    std::cin.getline(searchFam, 50);
    int f = 0;
    for (int i = 0; i < kol; i++)
    {
        if (strcmp(p[i].fam, searchFam) == 0) {
            std::cout
                << "--------------------Пациент  #" << i + 1 << "----------------------" << std::endl;
            std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                << " Адрес: " << p[i].adress << " " << std::endl
                << " Карта: " << p[i].card << std::endl
                << " Полис: " << p[i].pol << std::endl;
            std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
            f = 1; k = i;
        }
    }
    if (f == 0)
    {
        std::cout << "Данный пациент не найден" << std::endl;
    }
    else
    {
        do
        {
            std::cout << "Введите:\n";
            std::cout << "1 – изменение фамилии пациента\n";
            std::cout << "2 – изменение имени пациента\n";
            std::cout << "3 – изменение отчества\n";
            std::cout << "4 – изменение адреса\n";
            std::cout << "5 – изменение карты\n";
            std::cout << "6 – изменение полиса\n";
            std::cout << "7 – выход\n";

            while (true) {
                if (std::cin >> choice && choice > 0 && choice <= 7)break;
                else {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Введите корректное значение" << std::endl;
                }
            }

            switch (choice)
            {
            case 1: std::cout << "\nВведите новую фамилию\n";
                std::cin.ignore();
                std::cin.getline(p[k].fam, 50);
                break;

            case 2: std::cout << "Введите новое имя\n";
                std::cin.ignore();
                std::cin.getline(p[k].name, 50);
                break;

            case 3: std::cout << "Введите новое отчество \n";
                std::cin.ignore();
                std::cin.getline(p[k].otch, 50);
                break;

            case 4: std::cout << "Введите новый адрес\n";
                std::cin.ignore();
                std::cin.getline(p[k].adress, 50);
                break;

            case 5: std::cout << "Введите новую карту\n";
                while (true) {
                    if (std::cin >> p[k].card && p[k].card > 0)break;
                    else {
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Введите корректное значение" << std::endl;
                    }
                }
                std::cin.ignore();
                break;

            case 6: std::cout << "Введите новый полис \n";
                while (true) {
                    if (std::cin >> p[k].pol && p[k].pol > 0)break;
                    else {
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Введите корректное значение" << std::endl;
                    }
                    std::cin.ignore();
                }
                std::cin.ignore();
                break;

            case 7: return;
            }
        } while (true);
    }
    
}
void find() {
        int choice;      
        if (kol == 0)
            std::cout << "\nНет запиcей: \n";
        else
        {
            std::cout << "\nВведите  параметры поиска пациента:\n";
            std::cout << "1 – фамилия пациента \n";
            std::cout << "2 – имя пациента \n";
            std::cout << "3 - номер полиса пациента\n";
            while (true) {
                if (std::cin >> choice && choice > 0 && choice <= 30)break;
                else {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Введите корректное значение" << std::endl;
                }
            }

            switch (choice) {
            case 1: {
                char searchFam[50];
                std::cin.ignore();
                std::cin.getline(searchFam, 50);
                int f = 0;
                for (int i = 0; i < kol; i++)
                {
                    if (strcmp(p[i].fam, searchFam) == 0) {
                        std::cout
                            << "Пациент  #" << i + 1 << std::endl;
                        std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                            << " Адрес: " << p[i].adress << " " << std::endl
                            << " Карта: " << p[i].card << std::endl
                            << " Полис: " << p[i].pol << std::endl;
                        std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
                        f = 1;
                    }
                }
                if (f == 0) 
                    std::cout << "Данный пациент не найден" << std::endl;
                break;
            }

            case 2: {
                char searchName[50];
                std::cin.ignore();
                std::cin.getline(searchName, 50);
                int f = 0;
                for (int i = 0; i < kol; i++)
                {
                    if (strcmp(p[i].name, searchName) == 0) {
                        std::cout
                            << "Пациент  #" << i + 1 << std::endl;
                        std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                            << " Адрес: " << p[i].adress << " " << std::endl
                            << " Карта: " << p[i].card << std::endl
                            << " Полис: " << p[i].pol << std::endl
                            << "---------------------------------------" << std::endl;
                        f = 1;
                    }
                }
                if (f == 0) { std::cout << "Данный пациент не найден" << std::endl; }
                break;
            }

            case 3: {
                std::cout << "Введите номер полиса пациента : " << std::endl;
                int searchPol;
                std::cin >> searchPol;
                int f = 0;
                for (int i = 0; i < kol; i++)
                {
                    if (p[i].pol == searchPol) {
                        std::cout << "Пациент  #" << i + 1 << std::endl;
                        std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                            << " Адрес: " << p[i].adress << " " << std::endl
                            << " Карта: " << p[i].card << std::endl
                            << " Полис: " << p[i].pol << std::endl;
                        std::cout << std::endl << "---------------------------------------------------------------" << std::endl;
                        f = 1;
                    }
                }
                if (f == 0) {
                    std::cout << "Данный пациент не найден" << std::endl;
                }
                break;
            }
            }
        }

}
void sort()
             {
    int choice;
    if (kol == 0)
        std::cout << "\nНет запиcей: \n";
    else
    {
        std::cout << "\nВведите  параметры сортировки пациентов:\n";
        std::cout << "1 – фамилия пациента \n";
        std::cout << "2 – имя пациента \n";
        std::cout << "3 - номер карты пациента\n";
        while (true) {
            if (std::cin >> choice && choice > 0 && choice <= 30)break;
            else {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Введите корректное значение" << std::endl;
            }
        }
        switch (choice) {
        case 1: {
            for (int i = 0; i <kol-1; i++)
            {
                for (int j = 0; j < kol - i - 1; j++)
                {
                    if (strcmp(p[j].fam, p[j + 1].fam) > 0) {
                        patient tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = tmp;
                    }
                }
            }
            for (int i = 0; i < kol-1; i++) 
            {
                std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                    << " Адрес: " << p[i].adress << " " << std::endl
                    << " Карта: " << p[i].card << std::endl
                    << " Полис: " << p[i].pol << std::endl
                    << "---------------------------------------" << std::endl;
            }

            break;
        }

        case 2: {
            for (int i = 0; i < kol-1; i++)
            {
                for (int j = 0; j < kol - i - 1; j++)
                {
                    if (strcmp(p[j].name, p[j + 1].name) > 0) {
                        patient tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = tmp;
                    }
                }
            }
            for (int i = 0; i < kol; i++) {
                std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                    << " Адрес: " << p[i].adress << " " << std::endl
                    << " Карта: " << p[i].card << std::endl
                    << " Полис: " << p[i].pol << std::endl
                    << "---------------------------------------" << std::endl;
            }
            break;
        }

        case 3: {
            for (int i = 0; i < kol-1; i++)
            {
                for (int j = 0; j < kol - i - 1; j++)
                {
                    if (p[j].card> p[j + 1].card) {
                        patient tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = tmp;
                    }
                }
            }
            for (int i = 0; i < kol; i++) {
                std::cout << p[i].fam << " " << p[i].name << " " << p[i].otch << std::endl
                    << " Адрес: " << p[i].adress << " " << std::endl
                    << " Карта: " << p[i].card << std::endl
                    << " Полис: " << p[i].pol << std::endl
                    << "---------------------------------------" << std::endl;
            }
            break;
        }
        }



        
    }
}
