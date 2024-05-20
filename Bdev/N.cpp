// #include <bits/stdc++.h>
// using namespace std;
// #define fio ios_base::sync_with_stdio(false); cin.tie(NULL)
// #define ll long long

// int main() {
//     fio;
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, count = 0;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }
//         int mid = n / 2;
//         for (int i = 0; i < mid; ++i) {
//             if (arr[i] > arr[i + 1]) {
//                 count++;
//             }
//         }
//         for (int i = mid; i < n - 1; ++i) {
//             if (arr[i] > arr[i + 1]) {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        if (is_sorted(arr, arr + n))
            cout << 0 << endl;
        else if (arr[0] == 1 || arr[n - 1] == n)
            cout << 1 << endl;
        else if (arr[0] == n && arr[n - 1] == 1)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
