#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));

    vector<int> array;

    while (array.size() != 10)
    {
        int temp = rand() % 100;
        bool number = true;

        for (int j = 0; j < array.size(); j++)
        {
            if (array[j] == temp)
            {
                number = false;
            }
        }

        if (number)
        {
            array.push_back(temp);
            cout << temp << " ";
        }
    }

    cout << endl;

    sort(array.begin(), array.end());

    for_each(array.begin(), array.end(), [](int x) {cout << x << " "; });
}