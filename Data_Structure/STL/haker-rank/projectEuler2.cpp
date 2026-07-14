#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long f1 = 0;
        long long f2 = 1;
        long long fibo;
        long long sum = 0;
        if (n >= 1 && f2 % 2 == 0)
            sum += f2;
        for (int i = 2; f2 <= n; ++i)
        {
            fibo = f1 + f2;
            f1 = f2;
            f2 = fibo;
            if (fibo % 2 == 0 && fibo <= n)
                sum += fibo;
        }
        cout << sum << endl;
    }
    return 0;
}