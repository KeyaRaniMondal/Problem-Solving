#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, r;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.size() ; ++i) {
           for(int j=0;j<s.size();++j){
            if(s[i]==s[j]){
{                r+=s[i];
                flag=true;
                break;}
            }
           }
        }
        if (flag==true)
            cout << r[0] << endl;
        else
            cout << "." << endl;
    }
}
