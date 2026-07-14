#include <bits/stdc++.h>
using namespace std;
int rec_fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*rec_fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<rec_fact(n)<<endl;
}