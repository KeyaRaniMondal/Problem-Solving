#include<bits/stdc++.h>
using namespace std;

int rev_num(int n)
{
    int rev=0;
    while(n!=0)
    {
        int rem=n%10;
         rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;
    cout<<rev_num(n)<<endl;
}