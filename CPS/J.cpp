// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, sum = 0;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> arr[i];
//             sum += arr[i];
//         }
//         if (sum % n == 0)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0) {
            cout << "NO\n";
            continue;
        }
        int avg = sum / n;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == avg) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}
