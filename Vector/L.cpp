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
        for (auto &st : v)
            cin >> st;

        vector<int> sortV(v.begin(), v.end());
        sort(sortV.begin(), sortV.end());
        for (auto &strength : v)
        {
            if (strength == sortV[n - 1])
                cout << strength - sortV[n - 2] << " ";
            else
                cout << strength - sortV[n - 1] << " ";
        }
        cout << endl;
    }
}
