#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, current = 1;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            while (current == a[i] || (!b.empty() && current <= b.back()))
            {
                current++;
            }
            b.push_back(current);
            current++;
        }
        cout << b.back() << endl;
    }
}

