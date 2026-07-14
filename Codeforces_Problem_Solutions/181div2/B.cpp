#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long x = (a + k - 1) / k;
        long long y = (b + k - 1) / k;
        if (__gcd(a, b) >= max(x, y))
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
}