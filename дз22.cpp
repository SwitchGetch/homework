#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Output()
{
    system("cls");

    cout << "0) finish the changes" << endl;
    cout << "1) create file" << endl;
    cout << "2) add data to file" << endl;
    cout << "3) read file" << endl;
}

void Create()
{
    string str;

    ofstream ofile;

    cout << "create file: ";
    cin >> str;

    ofile.open(str);
    ofile.close();
}

void Append()
{
    string str;

    ofstream ofile;

    cout << "open file: ";
    cin >> str;

    ofile.open(str, ios::app);

    cout << "app data to file: ";
    cin >> str;

    ofile << str;
    ofile << "\n";

    ofile.close();
}

void Read()
{
    string str, line;

    ifstream ifile;

    cout << "open file to read: ";
    cin >> str;

    ifile.open(str);

    while (getline(ifile, line))
    {
        cout << line << endl;
    }

    ifile.close();
}

int main()
{
    int n;

    Output();

    cin >> n;

    while (n)
    {
        if (n == 1)
        {
            Create();
            Output();
            cin >> n;
        }
        else if (n == 2)
        {
            Append();
            Output();
            cin >> n;
        }
        else if (n == 3)
        {
            Read();
            cin >> n;
            Output();
            cout << n << endl;
        }
    }
}