#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long stack[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> stack[i];
        }
        sort(stack, stack + n);
        for (int i = 0; i < n; ++i)
        {
             if (stack[i] == 0 && stack[i+1] == 0)
            {
                cout << "NO" << endl;
                break;
            }
           else if ((stack[i] == stack[i + 1]) || (stack[i] < stack[i + 1]))
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}