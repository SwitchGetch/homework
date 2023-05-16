#include <iostream>
using namespace std;

double first(), second();
char action();

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    char c;

    a = first();

    c = action();

    b = second();

    switch (c)
    {
    case '+':
        cout << "= " << a + b << endl;

        break;

    case '-':
        cout << "= " << a - b << endl;

        break;

    case '*':
        cout << "= " << a * b << endl;

        break;

    case '/':
        cout << "= " << a / b << endl;

        break;

    default:
        cout << "нет такого действия" << endl;

        break;
    }
}

double first()
{
    double a;

    cin >> a;

    return a;
}

char action()
{
    char c;

    cin >> c;

    return c;
}

double second()
{
    double b;

    cin >> b;

    return b;
}