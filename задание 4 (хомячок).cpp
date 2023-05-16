#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double g;
    double days;
    double kg;

    cout << "Потребление корма в день (г): ";
    cin >> g;

    cout << "Количество дней: ";
    cin >> days;

    kg = (g * days) / 1000;

    cout << "Масса корма на " << days << " дней (кг): " << kg;
}

