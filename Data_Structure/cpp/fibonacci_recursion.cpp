//sum of all fibo numbers
#include<bits/stdc++.h>
using namespace std;

int rec_fibo(int n)
{
    if(n<=1)
    return n;
    else
    return rec_fibo(n-1)+rec_fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<rec_fibo(n)<<" ";
}
