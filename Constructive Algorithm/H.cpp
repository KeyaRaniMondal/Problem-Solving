#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 0; i < k; ++i)
        {
           for(int i=0;i<n;++i){
            if(arr[i]){
                arr[i]--;
                arr[n-1]++;
                break;
            }
           }
        }
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
}