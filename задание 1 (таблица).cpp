#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
    cout << "---------------------------------------------------------------" << endl;
    cout << "|    X     |     Y     |   X and Y   |   X or Y   |   not X   |" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "|    0     |     0     |      0      |      0     |     1     |" << endl;
    cout << "|    0     |     1     |      0      |      1     |     1     |" << endl;
    cout << "|    1     |     0     |      0      |      1     |     0     |" << endl;
    cout << "|    1     |     1     |      1      |      1     |     0     |" << endl;
    cout << "---------------------------------------------------------------" << endl;
}

