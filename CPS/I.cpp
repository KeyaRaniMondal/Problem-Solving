#include <bits/stdc++.h>
using namespace std;

const int MAXn = 1005;

bool rowPalindromic(int matrix[][MAXn], int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c / 2; ++j)
        {
            if (matrix[i][j] != matrix[i][c - 1 - j])
                return false;
        }
    }
    return true;
}

bool colPalindromic(int matrix[][MAXn], int r, int c)
{
    for (int j = 0; j < c; ++j)
    {
        for (int i = 0; i < r / 2; ++i)
        {
            if (matrix[i][j] != matrix[r - 1 - i][j])
                return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int matrix[MAXn][MAXn];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    if (rowPalindromic(matrix, n, n) && colPalindromic(matrix, n, n))
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "NO" << endl;
}
