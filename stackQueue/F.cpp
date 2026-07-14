// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n + 1];
//     queue<int> st;
//     for (int i = 1; i <= n; ++i)
//         cin >> arr[i];
//     for (int i = 1; i <= n; ++i)
//     {

//         int found = 0;
//         for (int j = i - 1; j >= 1; --j)
//         {
//             if (arr[j] < arr[i])
//             {
//                 found = j;
//                 break;
//             }
//         }
//         st.push(found);
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         cout << st.front() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> result(n + 1);
    stack<int> st;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    for (int i = 1; i <= n; ++i)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        if (st.empty())
            result[i] = 0;
        else
            result[i] = st.top();
        st.push(i);
    }
    for (int i = 1; i <= n; ++i)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
