#include <bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if (ch == '^')
        return 2;
    else if (ch == '*' || ch == '/')
        return 1;
    else if (ch == '+' || ch == '-')
        return 0;
    else
        return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, postfix = "";
        stack<char> st;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                postfix += s[i];
            else if (s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    postfix += st.top();
                    st.pop();
                }
                if (!st.empty() && st.top() == '(')
                    st.pop();
            }
            else
            {
                while (!st.empty() && (precedence(st.top()) >= precedence(s[i])))
                {
                    postfix += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            postfix += st.top();
            st.pop();
        }
        cout << postfix << endl;
    }
}
