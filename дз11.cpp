#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

vector<char> password(int length);

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int length;

    cout << "длина пароля: ";
    cin >> length;

    vector<char> pass = password(length);
}

vector<char> password(int length)
{
    vector<char> pass;

    for (int i = 0; i < length; i++)
    {
        pass.push_back(char(33 + rand() % 93));

        cout << pass[i];
    }

    return pass;
}