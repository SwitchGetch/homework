#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int*> array;
    int n;

    cout << "n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        array.push_back(&i);

        cout << i << " " << array[i] << endl;
    }
}
