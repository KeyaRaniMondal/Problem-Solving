#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        vector<int> v1;
        v1.push_back(v[0]);
        int m = 1;

        for (int i = 1; i < n; ++i)
        {
            if (v[i] > v[i - 1])
            {
                v1.push_back(v[i]);
                m++;
            }
        }

        cout << m << endl;
        for (int i = 0; i < m; ++i)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
}
