#include <bits/stdc++.h>
using namespace std;
int digitSum(int d)
{
    int sum = 0;
    while (d != 0)
    {
        sum += d % 10;
        d /= 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        while (digitSum(x) % k != 0)
        {
            x++;
        }
        cout << x << endl;
    }
}