// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long
// int main()
// {
//     fio;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         ll pr = 0, sq = 0;
//         for (int i = 0; i < s.size(); ++i)
//         {
//             if (s[i] == '(' || s[i] == ')')
//                 pr++;
//             else if (s[i] == '[' || s[i] == ']')
//                 sq++;
//         }
//         if ((pr % 2 == 0 && sq % 2 == 0) || s.size() == 0)
//             cout << "Yes" << endl;
//         else
//             cout << "No" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
map<char, int> bracket = {{'(', -1}, {'[', -2}, {')', 1}, {']', 2}};
string balance(string s)
{
    stack<char> st;
    for (auto b : s)
    {
        if (bracket[b] < 0)
            st.push(b);
        else
        {
            if (st.empty())
                return "No";
            char top = st.top();
            st.pop();
            if (bracket[top] + bracket[b] != 0)
                return "No";
        }
    }
    if (st.empty())
        return "Yes";
    else
        return "No";
}
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << balance(s) << endl;
    }

    return 0;
}