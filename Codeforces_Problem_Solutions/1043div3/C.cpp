#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<long long> v(40, 1);
    for (int i = 1; i < 40; ++i)
        v[i] = v[i - 1] * 3;
    while (t--)
    {
        long long n, sum = 0, x = 0;
        cin >> n;
        long long tmp = n, s = 0;
        while (tmp)
        {
            s += tmp % 3;
            tmp /= 3;
        }
        long long m = (n - s) / 2;
        vector<long long> count = {n};
        while (m > 0)
        {
            if (x >= count.size())
                count.push_back(0);
            long long avail = count[x] / 3;
            if (avail == 0)
            {
                ++x;
                continue;
            }
            long long take = min(avail, m);
            sum += take * v[x];
            count[x] -= take * 3;
            if (x + 1 >= count.size())
                count.push_back(0);
            count[x + 1] += take;
            m -= take;
        }
        cout << 3 * n + sum << endl;
    }
}
