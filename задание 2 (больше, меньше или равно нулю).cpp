#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double number;

    cin >> number;

    if (number > 0)
    {
        cout << number << " - положительное число" << endl;
    }

    if (number < 0)
    {
        cout << number << " - отрицательное число" << endl;
    }

    if (number == 0)
    {
        cout << number << " - равен нулю" << endl;
    }
}
