#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void function(vector<int> array, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        array.push_back(rand() % 1001);
        cout << array[i] << " ";
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        array[i] = array[i] % 10;
        cout << array[i] << " ";
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    
    vector<int> array;
    int n;

    cout << "длина массива: ";
    cin >> n;

    function(array, n);
}
