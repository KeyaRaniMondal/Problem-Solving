#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Generate first 10 Fibonacci numbers (starting from 1, 2)
vector<int> generate_fib(int n) {
    vector<int> fib(n);
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

// Try to pack all cubes in rows inside the box base (w x l), stacking layers if needed
bool can_fit(const vector<int>& cubes, int w, int l, int h) {
    vector<int> layer;  // current row heights
    int used_height = 0;
    int i = 0;
    int n = cubes.size();

    while (i < n) {
        int row_width = 0, row_height = 0;
        while (i < n && row_width + cubes[i] <= w) {
            row_width += cubes[i];
            row_height = max(row_height, cubes[i]);
            ++i;
        }
        used_height += row_height;
        if (used_height > h) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> fib = generate_fib(10);

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> cubes(fib.begin(), fib.begin() + n);
        reverse(cubes.begin(), cubes.end());  // Place larger cubes first

        string result;
        for (int i = 0; i < m; ++i) {
            int w, l, h;
            cin >> w >> l >> h;

            bool ok = false;
            // Try each orientation as height
            for (int d = 0; d < 3 && !ok; ++d) {
                int height = d == 0 ? h : (d == 1 ? w : l);
                int width  = d == 0 ? w : (d == 1 ? l : w);
                int length = d == 0 ? l : (d == 1 ? h : h);

                if (can_fit(cubes, min(width, length), max(width, length), height)) {
                    ok = true;
                }
            }
            result += ok ? '1' : '0';
        }

        cout << result << '\n';
    }

    return 0;
}
