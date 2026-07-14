#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<long long, long long> mp;
    vector<long long> v(n);
    for (auto &num : v)
    {
        cin >> num;
        mp[num]++;
    }
    long long maxBox = 0;
    for (auto &num : mp)
    {
        maxBox = max(maxBox, num.second);
    }
    cout << maxBox << endl;
}