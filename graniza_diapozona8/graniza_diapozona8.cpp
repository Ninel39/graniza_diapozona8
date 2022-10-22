// graniza_diapozona8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b, sum = 0;
    cout << "ВВедите первое число""\n";
    cin >> a;
    cout << "ВВедите второе число""\n";
    cin >> b;

    for (int i = a; i <= b; ++i)    sum += i;
    {
        cout << sum << endl;
    }
}

