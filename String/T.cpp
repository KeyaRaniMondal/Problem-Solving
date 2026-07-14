#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string best = s;

        // Try all swaps
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(s[i], s[j]);
                best = min(best, s);
                swap(s[i], s[j]); // restore original
            }
        }

        cout << best << "\n";
    }
    return 0;
}
