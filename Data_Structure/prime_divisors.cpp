//finding number of prime divisors
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int prime_factors(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        int count = 0;
        if (n % i!= 0)
            continue;
        while (n % i == 0)
        {
            n /= i;
            count++;
        }
        v.push_back({i, count});
    }
    if (n > 2)
        v.push_back({n, 1});
}
int main()
{
    int n;
    cin >> n;
    prime_factors(n);
    int nod = 1;
    for (int i = 0; i < v.size(); ++i)
    {
        nod *= (v[i].second + 1);
    }
    cout << nod << endl;
}