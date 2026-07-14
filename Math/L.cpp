#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dis;
    cin >> n;
    for (int i = 0; i <= 100; ++i)
    {
        dis = 5 * i;
        if (abs(n - dis) <= 2)
        {
            cout << dis << endl;
            break;
        }
    }
}