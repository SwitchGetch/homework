#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double price;

    cout << "Цена 1 кг яблок: ";
    cin >> price;

    cout << "Вес     Стоимость" << endl;
    cout << "(г.)    (руб.)" << endl;
    cout << "100     " << (price / 10) * 1 << endl;
    cout << "200     " << (price / 10) * 2 << endl;
    cout << "300     " << (price / 10) * 3 << endl;
    cout << "400     " << (price / 10) * 4 << endl;
    cout << "500     " << (price / 10) * 5 << endl;
    cout << "600     " << (price / 10) * 6 << endl;
    cout << "700     " << (price / 10) * 7 << endl;
    cout << "800     " << (price / 10) * 8 << endl;
    cout << "900     " << (price / 10) * 9 << endl;
    cout << "1000    " << (price / 10) * 10 << endl;
}

