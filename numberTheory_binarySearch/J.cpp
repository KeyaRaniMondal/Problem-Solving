#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

void factor_ful(vector<int> &v) {
    for (int i = 2; i <= 1e6; ++i) {
        if (v[i] == 0) {
            for (int j = i; j <= 1e6; j += i) {
                v[j]++;
            }
        }
    }
}

int main() {
    fio;
    vector<int> v(1e6 + 5, 0);
    factor_ful(v); 
    vector<vector<int>> num(11);
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] <= 10) {
            num[v[i]].push_back(i);
        }
    }
    ll t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        auto l = lower_bound(num[n].begin(), num[n].end(), a);
        auto r = upper_bound(num[n].begin(), num[n].end(), b);
        cout << r - l << endl;
    }
    return 0;
}
