#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

vector<int> function(vector<int> array, int n)
{
    vector<int> result;
    int count = 0;

    while (true)
    {
        int temp = rand() % n;

        if (array[temp] > 0)
        {
            result.push_back(array[temp]);

            cout << array[temp] << " ";

            array[temp] = -1;

            count++;
        }

        if (count == n)
        {
            break;
        }
    }
    
    return result;
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");

    vector<int> array;
    int n;

    cout << "длина массива: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        array.push_back(i + 1);
        cout << array[i] << " ";
    }

    cout << endl;

    array = function(array, n);
}
