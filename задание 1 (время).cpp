#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int hours;
    int minutes;

    cout << "Временной интервал (в минутах): ";
    cin >> minutes;

    hours = minutes / 60;
    minutes = minutes - (hours * 60);

    cout << hours << " ч. " << minutes << " мин." << endl;
}
