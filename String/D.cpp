#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> st;
    for (auto &ch : s) {
        if (ch != ' ') {
            ch = tolower(ch);     
            st.insert(ch);       
        }
    }

    if (st.size() == 26)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;

    return 0;
}
