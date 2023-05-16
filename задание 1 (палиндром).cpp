#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;


    cout << "введи четырёхзначное число: ";
    cin >> a;

    for ( ; ; )
    {
        if ((a / 100) >= 1 && (a / 10000) < 1)
        {
            break;
        }

        cout << "это не четырёхзначное число, введи ещё раз: ";
        cin >> a;
    }

    //эта штука переворачивает число
    b = (a % 10) * 1000 + ((a % 100) - (a % 10)) * 10 + ((a % 1000) - (a % 100)) / 10 + ((a % 10000) - (a % 1000)) / 1000;

    if (a == b)
    {
        cout << a << " -> " << b << " - это палиндром" << endl;
    }

    else
    {
        cout << a << " -> " << b << " - это не палиндром" << endl;
    }

}
