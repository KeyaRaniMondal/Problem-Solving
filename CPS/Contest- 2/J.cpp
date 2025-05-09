#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        for (long long y = 1;; ++y)
        {
            if ( (x & y) > 0 && (x ^ y) > 0 )
            {
                cout << y << endl;
                break;
            }
        }
    }
    return 0;
}
