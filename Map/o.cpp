#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    unordered_map<long long, int> squ;
    for (auto &x : v)
     cin >> x;
    long long count = 0;
    for (int i = 0; i < n; ++i) {
        for (int power = 0; power <= 31; ++power) {
            long long target = (1LL << power) - v[i];
            if (squ.count(target)) {
                count += squ[target];
            }
        }
        squ[v[i]]++;
    }
    cout << count << endl;
}
