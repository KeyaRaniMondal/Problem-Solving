// #include <bits/stdc++.h>
// using namespace std;
// #define fio                         \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL)
// #define ll long long
// int main()
// {
//   fio;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     ll n, sum = 0, sum1 = 0;
//     cin >> n;
//     vector<int> v(n);
//     vector<int> v1 = v;
//     for (int i = 0; i < n; ++i)
//       cin >> v[i];

//     if (v.begin() == v.end() && v[0] > 0)
//       cout << "YES" << endl;
//     else
//     {
//       for (int i = n - 1; i >= 0; i--)
//       {
//         ll mx = v[i];
//         if (v[i - 1] > v[i])
//           swap(v[i - 1], v[i]);
//       }
//     }
//     sort(v1.begin(), v1.end());
//     if (v == v1)
//       cout << "YES" << endl;
//     else
//       cout << "NO" << endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> v(n);
        vector<int> v1(n);
        
        // Read input values into the vector `v`
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        
        // Copy vector `v` to vector `v1` for later comparison
        v1 = v;
        
        // Check if the array is already sorted
        bool isSorted = true;
        for (int i = 1; i < n; ++i) {
            if (v[i] < v[i - 1]) {
                isSorted = false;
                break;
            }
        }
        
        if (isSorted) {
            cout << "YES" << endl;
            continue;
        }
        
        // Perform the sorting procedure
        for (int i = n - 1; i > 0; i--) {
            if (v[i - 1] > v[i])
                swap(v[i - 1], v[i]);
        }
        
        // Sort vector `v1` to check against `v`
        sort(v1.begin(), v1.end());
        
        // Compare the transformed vector `v` with the sorted vector `v1`
        if (v == v1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
