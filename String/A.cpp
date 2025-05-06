#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &str : v)
        cin >> str;
    reverse(v.begin(), v.end());
    for (auto &s : v)
        cout << s << endl;
}