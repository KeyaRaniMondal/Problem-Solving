#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
fio;
    int n, q;
    cin >> n;
    unordered_map<string, int> freq_map;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        freq_map[s]++;
    }

    cin >> q;
    while (q--)
    {
        string qe;
        cin >> qe;
        sort(qe.begin(), qe.end());
        cout << freq_map[qe] << endl;
    }

    return 0;
}
