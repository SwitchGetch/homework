#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int i, j, n, sum = 0;
    vector<vector<int>> square;

    cout << "введи сторону квадрата: ";
    cin >> n;

    cout << "-------------------------" << endl;

    for (i = 0; i < n; i++)
    {
        vector<int> temp;

        for (j = 0; j < n; j++)
        {
            temp.push_back(rand() % 10);
            cout << temp[j] << " ";
        }

        square.push_back(temp);

        cout << endl;
    }

    cout << "-------------------------" << endl;

    for (i = 1; i < n; i++)
    {
        sum += square[i][i - 1];
    }

    cout << sum << endl;
}
