#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;

HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);

class Position 
{
public:
    int x, y;
};

void Output(vector<string> chessboard, Position first, Position second)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == first.x && j == first.y)
            {
                SetConsoleTextAttribute(hand, 12);
            }
            else if (i == second.x && j == second.y)
            {
                SetConsoleTextAttribute(hand, 11);
            }
            else
            {
                SetConsoleTextAttribute(hand, 15);
            }

            cout << chessboard[i][j] << " ";
        }

        cout << endl;
    }

    return;
}

bool Bishop(vector<string> chessboard, Position first, Position second)
{
    if (chessboard[first.x][first.y] == chessboard[second.x][second.y])
    {
        vector<Position> pos;

        if (first.x > second.x && first.y > second.y)
        {
            for (int i = first.x, j = first.y; i >= 0 && j >= 0; i--, j--)
            {
                if (i == second.x && j == second.y)
                {
                    return true;
                }
            }
        }
        else if (first.x > second.x && first.y < second.y)
        {
            for (int i = first.x, j = first.y; i >= 0 && j < 8; i--, j++)
            {
                if (i == second.x && j == second.y)
                {
                    return true;
                }
            }
        }
        else if (first.x < second.x && first.y > second.y)
        {
            for (int i = first.x, j = first.y; i < 8 && j >= 0; i++, j--)
            {
                if (i == second.x && j == second.y)
                {
                    return true;
                }
            }
        }
        else if (first.x < second.x && first.y < second.y)
        {
            for (int i = first.x, j = first.y; i < 8 && j < 8; i++, j++)
            {
                if (i == second.x && j == second.y)
                {
                    return true;
                }
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    srand(time(NULL));

    vector<string> chessboard =
    {
        "O#O#O#O#",
        "#O#O#O#O",
        "O#O#O#O#",
        "#O#O#O#O",
        "O#O#O#O#",
        "#O#O#O#O",
        "O#O#O#O#",
        "#O#O#O#O",
    };

    Position first, second;

    first.x = rand() % 8;
    first.y = rand() % 8;
    second.x = rand() % 8;
    second.y = rand() % 8;

    while (first.x == second.x || first.y == second.y)
    {
        second.x = rand() % 8;
        second.y = rand() % 8;
    }

    Output(chessboard, first, second);

    cout << endl;

    SetConsoleTextAttribute(hand, 15);

    cout << "bishop can";

    if (Bishop(chessboard, first, second) != 1)
    {
        cout << "t" << endl;;
    }
}