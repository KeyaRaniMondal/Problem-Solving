#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

vector<int> maxAnd(vector<int> &a, int n)
{
    vector<int> maxAnd(n + 1, 0);
    for (int k = 1; k <= n; ++k)
    {
        int cur = INT_MAX;
        for (int i = 0; i < k; ++i)
        {
            cur &= a[i];
        }
        maxAnd[k] = cur;
        for (int i = k; i < n; ++i)
        {
            cur &= a[i];
            cur &= ~a[i - k];
            cur &= a[i];
            maxAnd[k] = max(maxAnd[k], cur);
        }
    }
    return maxAnd;
}

int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    vector<int> max_and = maxAnd(v, n);
    while (q--)
    {
        int k;
        cin >> k;
        cout << max_and[k] << endl;
    }
    return 0;
}
