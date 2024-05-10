#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fio;
int n,k;
cin>>n>>k;
cout<<max(0,3*n-k)<<endl;
    return 0;
}