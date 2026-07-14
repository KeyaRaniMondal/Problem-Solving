#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        ll max = arr[n - 1];
        ll count = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}