/*#include <bits/stdc++.h>
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
               { postfix += s[i];
                cout<<postfix<<endl;}
            else if (s[i] == '('){
                st.push(s[i]);
                cout<<postfix<<endl;}
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    postfix += st.top();
                    cout<<postfix<<endl;
                    st.pop();
                    cout<<postfix<<endl;
                }
                if (!st.empty() && st.top() == '('){
                    st.pop();
                    cout<<postfix<<endl;}
            }
            else
            {
                while (!st.empty() && (precedence(st.top()) >= precedence(s[i])))
                {
                    postfix += st.top();
                    cout<<postfix<<endl;
                    st.pop();
                    cout<<postfix<<endl;
                }
                st.push(s[i]);
                cout<<postfix<<endl;
            }
        }
        while (!st.empty())
        {
            postfix += st.top();
            cout<<postfix<<endl;
            st.pop();
            cout<<postfix<<endl;
        }
        cout << postfix << endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 1;
    else if (ch == '+' || ch == '-') return 2; // Change the precedence values
    else return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, prefix = "";
        cin >> s;
    stack<char> st;

    // Reverse the input string
    reverse(s.begin(), s.end());

    for (int i=0;i<s.length();++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            prefix += s[i];
        } else if (s[i] == ')') {
            st.push(s[i]);
        } else if (s[i] == '(') {
            while (!st.empty() && st.top() != ')') {
                prefix += st.top();
                st.pop();
            }
            st.pop(); // Remove the closing parenthesis
        } else {
            while (!st.empty() && (precedence(st.top()) >= precedence(s[i]))) {
                prefix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        prefix += st.top();
        st.pop();
    }

    // Reverse the result to get the prefix notation
    //reverse(prefix.begin(), prefix.end());
        cout << prefix << endl;
    }
    return 0;
}
