#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, hf1 = 0, hf2 = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        double hf = (double)n / 2;
        for (int i = 0; i < n; ++i)
        {
            if (i < floor(hf))
                hf1 += arr[i];
            else
                hf2 += arr[i];
        }
        if ((hf1 % 2 == 0 && hf2 % 2 == 0) || (hf1 % 2 != 0 && hf2 % 2 != 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
