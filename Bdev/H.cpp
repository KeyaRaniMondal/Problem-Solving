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
    ll a, b;
    cin >> a >> b;
    if (a == 0 || b == 0)
      cout << 0 << endl;
    else
    {
      ll mn = min(a, b);
      cout << min(mn, (a + b) / 4) << endl;
    }
  }
  return 0;
}