#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int i, j,  sum = 0;

    cout << "простые числа от 2 до 100: " << endl;

    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i % j) == 0)
            {
                sum += 1; 
            }
        }
        if (sum == 2)
        {
            cout << i << endl;
        }

        sum = 0;
    }
}
