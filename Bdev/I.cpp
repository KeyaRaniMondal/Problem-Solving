#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fio;
int n,k;
cin>>n>>k;
if(n==1 && (k==3||k==4 || k==5))
cout<<0<<endl;
else
cout<<k-(n*2)<<endl;
    return 0;
}