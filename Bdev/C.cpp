#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int j = 0;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] < s[j])
            {

                j = i;
            }
        }
        cout << s[j] << " ";
        for (int i = 0; i < s.size(); ++i)
        {
            if (i != j)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}