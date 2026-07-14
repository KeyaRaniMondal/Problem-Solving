#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, count = 0;
        cin >> n >> a >> b;
        for (long long i = 0; i <= n; ++i)
        {
            if (pow(2, i) == n)
            {
                count = i;
                break;
            }
        }
        cout << (a * count) + (b * (count - 1)) << endl;
    }
}