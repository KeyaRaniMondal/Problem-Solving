// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long
// vector<ll> v[100005];
// bool visit[100005];

// int dfs(int node)
// {
//     visit[node] = true;
//     int res = 1;
//     for (auto t : v[node])
//     {
//         if (visit[t] == false)
//             res += dfs(t);
//     }
//     return res;
// }
// int main()
// {
//     fio;
//     int t=1;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         for (int i = 0; i < n; ++i) {
//             int u, v1;
//             cin >> u >> v1;
//             v[u].push_back(v1);
//             v[v1].push_back(u);
//         }
//         int node = dfs(1);
//         if (n == m + 1 && node == n)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int count_letters(const string& text) {
    int letter_count = 0;
    for (char c : text) {
        if (isalpha(c)) {
            letter_count++;
        }
    }
    return letter_count;
}

int count_words(const string& text) {
    int word_count = 0;
    bool in_word = false;
    for (char c : text) {
        if (isspace(c)) {
            in_word = false;
        } else if (!in_word) {
            word_count++;
            in_word = true;
        }
    }
    return word_count;
}

int count_sentences(const string& text) {
    int sentence_count = 0;
    for (char c : text) {
        if (c == '.' || c == '!' || c == '?') {
            sentence_count++;
        }
    }
    return sentence_count;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index< 1) {
        cout << "Before Grade 1\n";
    } else if (index >= 16) {
        cout << "Grade 16+\n";
    } else {
        cout << "Grade " << index << endl;
    }

    return 0;
}