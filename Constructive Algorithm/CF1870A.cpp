#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, sum;
        cin >> n >> k >> x;
        if (n < k || x < (k - 1))
            cout << "-1" << endl;
        else
        {
            sum = (k * (k - 1)) / 2;
            if (x == k)
                sum += (n - k) * (x - 1);
            else
                sum += (n - k) * x;

            cout << sum << endl;
        }
    }
}