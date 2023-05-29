#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string str1, str2 = "";

    ofstream ofile;
    ofile.open("text1.txt");
    ofile << "Wake up... you gonna be late!!! Wakey, wakey!!!";
    ofile.close();

    ifstream ifile;
    ifile.open("text1.txt");

    if (ifile.is_open())
    {
        while (getline(ifile, str1))
        {
            cout << str1 << endl;;
        }
    }

    ifile.close();

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == 32 || (str1[i] > 64 && str1[i] < 91) || (str1[i] > 96 && str1[i] < 123))
        {
            str2 += str1[i];
            cout << str1[i];
        }
    }

    ofile.open("text2.txt");
    ofile << str2;
    ofile.close();
}
