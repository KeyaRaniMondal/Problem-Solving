// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     stack<string> forward;
//     stack<string> backward;
//     for (int i = 1; i <= t; ++i)
//     {
//         string u = "http://www.lightoj.com/";
//         backward.push(u);
//         cout << "Case " << i << ":";
//         while (1)
//         {
//             string s;
//             cin >> s;
//             if (s == "visit")
//             {
//                 string url;
//                 cin >> url;
//                 backward.push(url);
//             }
//             else if (s == "BACK")
//             {
//                 string b;
//                 if (!backward.empty())
//                 {
//                     b = backward.top();
//                     forward.push(b);
//                     backward.pop();
//                 }
//                 else
//                     cout << "Ignored" << endl;
//             }
//             else if (s == "FORWARD")
//             {
//                 string f;
//                 if (!forward.empty())
//                 {
//                     f = forward.top();
//                     backward.push(f);
//                     forward.pop();
//                 }
//                 else
//                     cout << "Ignored" << endl;
//             }
//             else if (s == "QUIT")
//                 break;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        stack<string> forward;
        stack<string> backward;
        string current = "http://www.lightoj.com/";

        cout << "Case " << i << ":" << endl;

        while (true)
        {
            string s;
            cin >> s;

            if (s == "QUIT")
                break;
            else if (s == "VISIT")
            {
                string url;
                cin >> url;
                backward.push(current);
                current = url;
                while (!forward.empty())
                {
                    forward.pop();
                }
                cout << current << endl;
            }
            else if (s == "BACK")
            {
                if (backward.empty())
                    cout << "Ignored" << endl;
                else
                {
                    forward.push(current);
                    current = backward.top();
                    backward.pop();
                    cout << current << endl;
                }
            }
            else if (s == "FORWARD")
            {
                if (forward.empty())
                    cout << "Ignored" << endl;
                else
                {
                    backward.push(current);
                    current = forward.top();
                    forward.pop();
                    cout << current << endl;
                }
            }
        }
    }
    return 0;
}
