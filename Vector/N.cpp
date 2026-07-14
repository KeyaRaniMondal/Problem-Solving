#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1, maxCount = 1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (int i = 0; i < n - 1; ++i)
    {

        if (v[i + 1] >= v[i])
            count++;
        else
            count = 1;
        maxCount = max(maxCount, count);
    }
    cout << maxCount << endl;
}
