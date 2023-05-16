#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int function(vector<int> array, int length, int n)
{
    int difference = INT_MAX, i, approximate = 0;

    for (i = 0; i < length; i++)
    {
        int temp = n - array[i];

        if (temp < 0)
        {
            temp *= -1;
        }

        if (temp > 0)
        {
            if (difference > temp)
            {
                difference = temp;

                approximate = i;
            }
        }
    }

    return array[approximate];
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    vector<int> array;
    int n, i, length;

    cout << "введи длину массива: ";
    cin >> length;

    for (i = 0; i < length; i++)
    {
        array.push_back(rand() % 100);
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "введи число, к которому нужно будет найти максимально приближённое число в массиве: ";
    cin >> n;

    cout << function(array, length, n);
}