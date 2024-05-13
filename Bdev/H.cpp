#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
int main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
     ll a,b;
     cin>>a>>b;
     if((a==1||b==1)||(a==1&&b==1))
     cout<<1<<endl;
     else if((a==2||b==2)||(a==2&&b==2))
     cout<<2<<endl;
       else if((a==3||b==3)||(a==3&&b==3))
     cout<<3<<endl;
     else
     {
        cout<<(a+b)%4<<endl;
     }
    }
    return 0;
}