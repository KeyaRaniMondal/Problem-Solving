#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
            cout << "NEUTRAL" << endl;
        if (x < y)
            cout << "PROFIT" << endl;
        if (x > y)
            cout << "LOSS" << endl;
    }
}