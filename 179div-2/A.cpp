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
        long long floorValueOfLog2x = 63 - __builtin_clzll(x);
        cout << (2 * floorValueOfLog2x) + 3 << endl;
    }
}