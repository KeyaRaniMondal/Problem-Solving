#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n, count = 0;
    cin >> n;
    int arr[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; ++i)
    {
        count += n / arr[i];
        // cout<<count;
        n %= arr[i];
        //cout << n << "  ";
    }
    cout << count << endl;
    return 0;
}
