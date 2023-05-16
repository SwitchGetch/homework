#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c;

    cin >> a; cin >> b; cin >> c;

    if (a == b && a == c)
    {
        cout << "эти числа равны" << endl;
    }
    else
    {
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " - " << c << " = " << a - c << endl;

        cout << b << " - " << a << " = " << b - a << endl;
        cout << b << " - " << c << " = " << b - c << endl;

        cout << c << " - " << a << " = " << c - a << endl;
        cout << c << " - " << b << " = " << c - b << endl;
    }
}
