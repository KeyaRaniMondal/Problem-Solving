#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> s(n), t(n);
        map<long long, long long> count;
        for (auto &sin : s)
            cin >> sin;
        for (auto &tin : t)
            cin >> tin;
        if (k == 0)
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if (s == t)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        for (auto &s1 : s)
        {
            long long r = ((s1 % k) + k) % k;
            count[min(r, k - r)]++;
        }
        for (auto &t1 : t)
        {
            long long r = ((t1 % k) + k) % k;
            count[min(r, k - r)]--;
        }
        int flag = 0;
        for (auto &c : count)
        {
            if (c.second != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
