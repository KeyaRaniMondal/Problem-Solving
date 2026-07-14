#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        bool isBalanced = true;
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else if (ch == ')' || ch == '}' || ch == ']')
            {
                if (st.empty())
                {
                    isBalanced = false;
                    break;
                }
                if (ch == ')' && st.top() == '(' || ch == '}' && st.top() == '{' || ch == ']' && st.top() == '[')
                    st.pop();
            }
            else
            {
                isBalanced = false;
                break;
            }
        }
        if (!st.empty())
            isBalanced = false;
        if (isBalanced == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}