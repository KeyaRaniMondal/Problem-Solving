#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &prob : v)
        cin >> prob;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        if (v[i]>=count)
            count++;
    }
    cout << count-1 << endl;
}