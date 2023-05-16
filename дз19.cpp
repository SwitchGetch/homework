#include <iostream>
using namespace std;

bool func(int a, int b, int c)
{
    return a < b + c && b < a + c && c < a + b;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c;

    cout << "стороны треугольника: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << func(a, b, c);
}
