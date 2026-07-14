#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int  f1=0,f2=1;
    cout<<f1<<" "<<f2<<" ";
    for(int i=3;i<=n;++i)
    {
            int fibo=f1+f2;
            f1=f2;
            f2=fibo;
            cout<<f2<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
}