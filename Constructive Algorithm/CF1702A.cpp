#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, res = 1;
        cin >> m;
        while (res * 10 <= m)
        {
            if (res * 10 <= m)
                res *= 10;
            else
                break;
        }
        cout << m - res << endl;
    }
}