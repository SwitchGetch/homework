#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int x, a, b, c, i;

    cout << "введи трёхзначное число: ";
    cin >> x;

    for (; ; )
    {
        if ((x / 10) >= 10 && (x / 1000) < 1)
        {
            break;
        }

        cout << "это не трёхзначное число, введи ещё раз: ";
        cin >> x;
    }

    a = x % 10;
    b = ((x % 100) - (x % 10)) / 10;
    c = ((x % 1000) - (x % 100)) / 100;

    cout << c << " * " << b << " * " << a << " = " << c * b * a << endl;
    
    cout << "делители числа " << x << ":" << endl;

    for (i = 1; i <= x; i++)
    {
        if ((x % i) == 0)
        {
            cout << i << endl;
        }
    }
}
