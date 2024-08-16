#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
vector<ll> v[100005];
bool visit[100005];

int dfs(int node)
{
    visit[node] = true;
    int res = 1;
    for (auto t : v[node])
    {
        if (visit[t] == false)
            res += dfs(t);
    }
    return res;
}
int main()
{
    fio;
    int t=1;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            int u, v1;
            cin >> u >> v1;
            v[u].push_back(v1);
            v[v1].push_back(u);
        }
        int node = dfs(1);
        if (n == m + 1 && node == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}