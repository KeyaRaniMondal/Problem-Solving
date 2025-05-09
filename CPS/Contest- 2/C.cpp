#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p, count = 0;
    cin >> n >> m >> p;
    for (int i = 0; m + i * p <= n; ++i)
    {
        count++;
    }
    cout << count << endl;
}