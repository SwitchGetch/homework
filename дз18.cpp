#include <iostream>
#include <string>
using namespace std;

void function(int n)
{
    int sum = 0;
    string num = to_string(n);

    for (int i = 0; i < 4; i++)
    {
        sum += num[i] - '0';
    }

    if (sum == 15)
    {
        cout << num << endl;
    }
}

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        function(i);
    }
}