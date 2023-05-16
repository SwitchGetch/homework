#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double inch;
    double cm;

    cout << "Диагональ экрана (в дюймах): ";
    cin >> inch;

    cm = inch * 2.54;

    cout << "---------------------------------------" << endl;
    cout << "Диагональ экрана (сантиметрах): " << cm << endl;
}

