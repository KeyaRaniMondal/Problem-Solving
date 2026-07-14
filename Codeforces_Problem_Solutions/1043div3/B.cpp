#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m = 10;
        cin >> n;
        vector<long long> res;
        for (int i = 1; i <= 18; ++i)
        {
            if ((m + 1) != 0 && n % (m + 1) == 0)
                res.push_back(n / (m + 1));
            if (i < 18)
                m *= 10;
        }
        if (res.empty())
            cout << 0 << endl;
        else
        {
            sort(res.begin(), res.end());
            cout << res.size() << endl;
            for (int i = 0; i < res.size(); ++i)
            {
                if (i)
                    cout << ' ';
                cout << res[i];
            }
            cout << endl;
        }
    }
}