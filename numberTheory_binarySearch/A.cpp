#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    int i = 10;
    while (i--)
    {
        set<int> s;
        for (int i = 1; i <= 10; ++i)
        {
            int n;
            cin >> n;
            s.insert(n % 42);
        }
        cout << s.size() << endl;
    }
    return 0;
}