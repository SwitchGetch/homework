#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    string wtf = "4 номер это набор слов, я не понял что надо сделать, поэтому напишу программу для нахождения простых чисел в заданном диапазоне";

    int i, j, begin, end;
    bool primal = true;

    for (i = 0; i < wtf.size(); i++)
    {
        cout << wtf[i];
    }

    cout << endl;
    cout << endl;

    cout << "начало диапазона: ";
    cin >> begin;

    cout << "конец диапазона: ";
    cin >> end;

    for (i = begin; i <= end; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primal = false;
            }
        }

        if (primal)
        {
            cout << i << endl;
        }

        primal = true;
    }
}
