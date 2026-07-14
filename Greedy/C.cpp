#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (y == n)
            cout << "-1" << endl;
        else
        {
            cout << x << " ";
            for (int i = 1; i < n; ++i)
            {
                if (x <= y)
                {
                    x += i;
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }
}