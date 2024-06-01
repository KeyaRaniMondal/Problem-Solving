#include <bits/stdc++.h>
using namespace std;
#define fio                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define ll long long
int main()
{
  fio;
  int t;
  cin >> t;
  while (t--)
  {
    ll n, sum = 0, sum1 = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> v[i];
      sum += v[i];
      sum1 += i;
    }
    if (sum >= sum1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}