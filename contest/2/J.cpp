#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0, cnt_a = 0, cnt_b = 0;
        string res = "";
        while (i < n && j < m)
        {
            if ((a[i] < b[j] && cnt_a < k) || cnt_b == k)
            {
                res += a[i++];
                cnt_a++;
                cnt_b = 0;
            }
            else
            {
                res += b[j++];
                cnt_b++;
                cnt_a = 0;
            }
        }
        cout << res << endl;
    }
}
