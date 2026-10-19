#include <iostream>


using namespace std;

bool checkIfAngle(int curX, int curY, int n , int m)
{
    if (curX == 0 && curY == 0)
        return false;
    bool isXBoard = curX == 0 || curX == n - 1;
    bool isYBoard = curY == 0 || curY == m - 1;
    return isXBoard && isYBoard;
}

bool checkIfXBoard(int curX, int n)
{
    return curX == 0 || curX == n - 1;
}

bool checkIfYBoard(int curY, int m)
{
    return curY == 0 || curY == m - 1;
}


int main()
{
    char table[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20 ; j++)
        {
            table[i][j] = '.';
        }
    }
    int n, m;
    cin >> m >> n;
    int prevX = 0;
    int prevY = 0;
    int vX = 1;
    int vY = 1;
    table[prevX][prevY] = 'x';

    int curX = prevX;
    int curY = prevY;

    do
    {
        curX = prevX + vX;
        curY = prevY + vY;
        table[curX][curY] = 'x';
        if (checkIfXBoard(curX, n))
            vX = -vX;
        if (checkIfYBoard(curY, m))
            vY = -vY;
        prevX = curX;
        prevY = curY;
    }
    while (!checkIfAngle(curX, curY, n, m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}
