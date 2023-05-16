#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    // задание 1

    srand(time(NULL));

    int n, k, i;

    cout << "n: ";
    cin >> n;

    cout << "k: ";
    cin >> k;

    int* a = new int[n];

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % k;
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "------------------------" << endl;

    // задание 2

    int arr[5][5];
    int j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }

        cout << endl;
    }

    cout << "------------------------" << endl;

    // задание 3

    vector<int> vec;

    while (true)
    {
        int temp;
        cin >> temp;

        if (temp == 8080)
        {
            break;
        }

        vec.push_back(temp);
    }

    cout << endl;
    cout << "------------------------" << endl;

    // задание 4

    vector<vector<int>> array;
    int x, y;

    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    for (i = 0; i < y; i++)
    {
        vector<int> temp;

        for (j = 0; j < x; j++)
        {
            temp.push_back(rand() % 10);
            cout << temp[j] << " ";
        }

        array.push_back(temp);
        cout << endl;
    }
}
