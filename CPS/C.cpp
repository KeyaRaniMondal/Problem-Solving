#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0;
        cin >> n >> k;
        int arr[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            if (arr[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
