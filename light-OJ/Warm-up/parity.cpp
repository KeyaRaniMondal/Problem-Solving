#include <bits/stdc++.h>
using namespace std;

int dec_bin(long long n)
{
    string s;
    while (n != 0)
    {
        s += n % 2 + '0';
        n /= 2;
    }
    int count = 0;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == '1')
            count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        long long n;
        cin >> n;
        int bin = dec_bin(n);

        if (bin & 1)
            cout << "Case " << i << ": odd" << endl;
        else
            cout << "Case " << i << ": even" << endl;
    }

    return 0;
}
