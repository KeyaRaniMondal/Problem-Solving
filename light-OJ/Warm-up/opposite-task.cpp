#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>10)
            cout<<"10 "<<n-10<<endl;
        else
            cout<<"0 "<<n<<endl;
    }
    return 0;
}