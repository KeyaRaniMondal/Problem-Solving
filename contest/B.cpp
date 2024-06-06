#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{

    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<ll> color;
    color.insert(s1);
    color.insert(s2);
    color.insert(s3);
    color.insert(s4);
    ll count = color.size();
    ll buy = 4 - count;
    cout << buy << endl;
    return 0;
}
