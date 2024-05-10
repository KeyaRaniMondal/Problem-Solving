#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n); 

        bool flag = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] > 1) {
                flag = 0;
                break;
            }
        }
        if (flag) 
            cout << "YES" << endl;
         else 
            cout << "NO" << endl;        
    }

    return 0;
}