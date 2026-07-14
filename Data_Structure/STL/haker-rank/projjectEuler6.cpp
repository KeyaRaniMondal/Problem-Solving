#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum1 = 0, sum2 = 0;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            sum1 += i;
        }
        for (int i = 1; i <= n; ++i)
        {
            sum2 += i * i;
        }
        cout << (sum1 * sum1) - sum2 << endl;
    }
}
