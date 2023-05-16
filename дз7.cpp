#include <iostream>
#include <vector>
using namespace std;

int n = 0;

int function()
{
    n++;
    cout << n << endl;
    return function();
}

void main()
{
    function();

    /*int i, n = 1;

    while (true)
    {
        for (i = 1; i <= n; i++)
        {
            if (pow(i, 2) + pow(n, 2) == 19451945)
            {
                cout << n << " " << i << endl;
            }
        }

        if (n == 4403)
        {
            break;
        }

        n += 1;
    }*/

    /*int a = LONG_MAX;
    vector<int> array;

    cout << a << endl;

    while (a)
    {
        array.push_back(a % 2);
        a /= 2;
    }

    for (int i = array.size() - 1; i >= 0; i--)
    {
        cout << array[i];
    }

    cout << endl;
    cout << array.size();*/

    /*int n, i, j;
    vector<int> array;
    bool prime = true;

    cin >> n;

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }

        if (prime)
        {
            array.push_back(i);
        }

        prime = true;
    }

    cout << "------------" << endl;

    while (n)
    {
        for (i = 0; i < array.size(); i++)
        {
            if (n % array[i] == 0 && i < array.size() - 1)
            {
                cout << array[i] << " ";
                n /= array[i];
            }
        }
    }*/

    /*setlocale(LC_ALL, "Russian");

    const int size = 10;
    double array[size];
    int i, imin, imax;
    double min, max, sumnegative = 0, min_max_multiplication = 1, even_multiplication = 1, i_first_negative, i_last_negative, first_last_negative_sum = 0;

    cout << "элементы массива:" << endl;

    for (i = 0; i <= size - 1; i++)
    {
        cin >> array[i];
    }

    cout << endl;

    cout << "сумма отрицательных элементов: ";

    for (i = 0; i <= size - 1; i++)
    {
        if (array[i] < 0)
        {
            sumnegative += array[i];
        }
    }

    cout << sumnegative << endl;

    cout << endl;

    cout << "произведение элементов между минимальным и максимальным элементами: ";

    min = array[0];
    max = array[0];
    imin = 0;
    imax = 0;

    for (i = 0; i <= size - 1; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            imin = i;
        }

        if (array[i] > max)
        {
            max = array[i];
            imax = i;
        }
    }

    if (imin + 1 < imax)
    {
        for (i = imin + 1; i <= imax - 1; i++)
        {
            min_max_multiplication *= array[i];
        }

        cout << min_max_multiplication << endl;
    }
    else if (imin > imax + 1)
    {
        for (i = imax + 1; i <= imin - 1; i++)
        {
            min_max_multiplication *= array[i];
        }

        cout << min_max_multiplication << endl;
    }
    else if ((imin == imax) || (imin + 1 == imax) || (imin == imax + 1))
    {
        cout << 0 << endl;
    }

    cout << endl;

    cout << "произведение элементов с четными номерами: ";

    for (i = 2; i <= size - 1; i++)
    {
        if (i % 2 == 0)
        {
            even_multiplication *= array[i];
        }
    }

    cout << even_multiplication << endl;

    cout << endl;

    cout << "сумма элементов между первым и последним отрицательными элементами: ";

    for (i = 0; i <= size - 1; i++)
    {
        if (array[i] < 0)
        {
            i_first_negative = i;
        }
    }

    for (i = size - 1; i >= 0; i--)
    {
        if (array[i] < 0)
        {
            i_last_negative = i;
        }
    }

    if (i_first_negative < i_last_negative)
    {
        for (i = i_first_negative + 1; i <= i_last_negative - 1; i++)
        {
            first_last_negative_sum += array[i];
        }

        cout << first_last_negative_sum << endl;
    }
    else if (i_first_negative > i_last_negative)
    {
        for (i = i_last_negative + 1; i <= i_first_negative - 1; i++)
        {
            first_last_negative_sum += array[i];
        }

        cout << first_last_negative_sum << endl;
    }
    else if (i_first_negative == i_last_negative)
    {
        cout << 0 << endl;
    }*/
}
