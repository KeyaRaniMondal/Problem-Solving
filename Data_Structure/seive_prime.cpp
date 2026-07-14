// #include<bits/stdc++.h>
// using namespace std;
// const int N=100000;
// vector<bool>isPrime(N,true);

// void seive()
// {
//     isPrime[0]=isPrime[1]=false;
//     for(int i=2;i<N;++i)
//     {
//         if(isPrime[i]==true)
//         {
//             for(int j=2*i;j<N;j+=i)
//             {
//                 isPrime[j]=false;
//             }
//         }
//     }
// }
// int main()
// {
//      seive();
//      int n;
//      cin>>n;
//      if( isPrime[n])
//      cout<<"prime"<<endl;
//      else
//      cout<<"not prime"<<endl;
// }

#include <bits/stdc++.h>
using namespace std;
int prime[100];
int n;
void seive()
{
    int limit = sqrt(n);
    prime[1] = true;
    for (int i = 2 * 2; i <= n; i += 2)
        prime[i] = true;
    for (int i = 3; i <= n; i += 2)
    {
        if (prime[i] = false)
        {
            for (int j = 2 * 2; j <= n; j += i)
            {
                prime[j] = true;
            }
        }
    }
}
int main()
{
    //memset(prime, true, sizeof(prime));
    cin >> n;
    seive();
    for (int i = 1; i <= n; ++i)
    {
        if (prime[i] == false)
            cout << i << " is a prime" << endl;
        else
            cout << i << " is not a prime" << endl;
    }
}