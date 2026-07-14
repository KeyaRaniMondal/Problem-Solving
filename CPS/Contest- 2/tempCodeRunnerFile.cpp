#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p, count = 0, moon;
    cin >> n >> m >> p;
    for (int i = 0; i <= p; ++i)
    {
        moon = m + i * p;
        // cout<<moon<<" ";
        if (moon <= n)
        {
            count++;
        }
    }

    cout << count << endl;
}