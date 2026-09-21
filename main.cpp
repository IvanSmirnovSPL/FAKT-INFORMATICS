#include <iostream>

using namespace std;

int colSum(int m[][100], int colNum, int rowNum)
{
    int sum = 0;
    for (int i = 0; i < rowNum; ++i)
    {
        sum += m[i][colNum];
    }
    return sum;
}

void printTranspose(int m[][100], int colNum, int rowNum)
{
    for (int i = 0; i < colNum; ++i)
    {
        for (int j = 0; j < rowNum; ++j)
        {
            cout << m[j][i] << " ";
        }
        cout << endl;
    }
}

void printRotate(char m[][25], int colNum, int rowNum)
{
    for (int i = colNum - 1; i >= 0; --i) {          
        for (int j = 0; j < rowNum; ++j) {         
            cout << m[j][i];
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    char arr[25][25];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char elem;
            cin.get(elem);
            while (elem == '\n') {
                cin.get(elem);
            }
            arr[i][j] = elem;
        }
    }

    // for (int i = 0;i < n; ++i ){
    //     for (int j = 0; j < m + 1; ++j)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    // int maxColNum = 0;
    // int maxSum = colSum(arr, maxColNum, n);
    // for (int j = 1; j < m; ++j)
    // {
    //     int curSum = colSum(arr, j, n);
    //     if (curSum > maxSum)
    //     {
    //         maxSum = curSum;
    //         maxColNum = j;
    //     }
    // }
    
    // cout << maxColNum << endl;

    printRotate(arr, m, n);

    return 0;
}