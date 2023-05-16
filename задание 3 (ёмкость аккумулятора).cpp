#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double n;
    double number;
    double powerbank;

    cout << "Ёмкость аккумулятора смартфона (мАч): ";
    cin >> n;

    cout << "Количество необходимых полных зарядов смартфона: ";
    cin >> number;

    powerbank = n * number;

    cout << "Минимальная ёмкость пауэрбанка (мАч): " << powerbank;
}
