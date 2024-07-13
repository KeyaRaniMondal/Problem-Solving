#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
const int N=10000000;
vector<bool>isPrime(N,true);

void seive()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;++i)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i;j<N;j+=i)
            {
                isPrime[j]=false;
            }
            isPrime.push_back(i);
        }
    }

}

int main()
{
    seive();
    int t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << isPrime[n - 1] << endl;
    }
}