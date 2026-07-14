#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, res = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &num : v)
        cin >> num;
    for (int i = 0; i < 2 * n; ++i)
    {
        if (v[i % n] == 1)
        {
            count++;
            res = max(res, count);
        }
        else
            count = 0;
    }
    cout << res << endl;
}
