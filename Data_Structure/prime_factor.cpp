#include <bits/stdc++.h>
using namespace std;

int prime_factors(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        int count = 0;
        if (n % i == 0)
            cout << i << " ";
        while (n % i == 0)
        {
            n /= i;
            count++;
        }
        cout << count << endl;
    }
    if (n > 2)
        cout << n << " " << 1 << endl;
}
int main()
{
    int n;
    cin >> n;
    prime_factors(n);
}