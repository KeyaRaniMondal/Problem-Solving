#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
vector<int> biny;
int binary_search(int q)
{
    int left = 0, right = biny.size() - 1;
    int pos = -1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (biny[mid] == q)
        {
            pos = mid;
            right = mid - 1;
        }
        if (biny[mid] < q)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return pos;
}
int main()
{
    fio;
    int n, qe;
    cin >> n >> qe;
    biny.resize(n);
    vector<ll> biny(n);
    for (ll i = 0; i < n; ++i)
        cin >> biny[i];
    for (int i = 0; i < qe; ++i)
    {
        int q;
        cin >> q;
        cout << binary_search(q) << endl;
    }
    return 0;
}
