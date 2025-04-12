#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p, count = 0;
    cin >> n >> m >> p;
    int fullMoon = m;
    while (fullMoon <= n)
    {
        count++;
        fullMoon += p;
    }
    cout << count << endl;
}
