#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        long long n,s;
        cin>>n>>s;
        int median=n/2+1;
        cout<<s/median <<endl;     
    }
    return 0;
}