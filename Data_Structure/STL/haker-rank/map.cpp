#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    int q;
    cin >> q;
    map<string, int> m;
    while (q--)
    {
        string x;
        int type, y;
        cin >> type >> x;
        if (type == 1)
        {
            cin >> y;
            m[x] += y;
        }
        else if (type == 2)
            m.erase(x);
        else if (type == 3)
            cout << m[x] << endl;
    }
}
