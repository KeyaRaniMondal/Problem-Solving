#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> name;
    for (int i = 0; i < n; ++i)
    {
        string Name, ip;
        cin >> Name >> ip;
        name.push_back({Name, ip});
    }
    vector<pair<string, string>> command;
    for (int i = 0; i < m; ++i)
    {
        string Command, i_p;
        cin >> Command >> i_p;
        command.push_back({Command, i_p});
    }
    for (auto &p2 : command)
    {
        string ipSemicolon = p2.second;
        string removeSemi = ipSemicolon.substr(0, ipSemicolon.size() - 1);
        for (auto &p1 : name)
        {
            if (p1.second == removeSemi)
                cout << p2.first << " " << p2.second << " " << "#" << p1.first << endl;
        }
    }
}