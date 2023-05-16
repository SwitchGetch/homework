#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int n, i, j;
    vector<int> array;

    cout << "длина массива: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        array.push_back(rand() % 10);
        cout << array[i] << " ";
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        int temp_max = 0, temp_jmax = 0;

        for (j = 0; j < n; j++)
        {
            if (array[j] > temp_max)
            {
                temp_max = array[j];
                temp_jmax = j;
            }
        }

        cout << temp_max;

        array[temp_jmax] = -1;

        temp_max = 0;
    }
}
