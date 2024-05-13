// input.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Требуется сложить два целых числа А и В.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << a + b << endl;


    return 0;
}


