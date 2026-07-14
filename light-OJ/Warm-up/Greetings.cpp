#include <bits/stdc++.h>
using namespace std;

/**
 * Returns the total number of problems.
 *
 * @param a denotes the number of problems in the first computer
 * @param b denotes the number of problems in the second computer
 */
int sum(int a, int b) {
    // Implement this method
    return a+b;
}

/**
 * Takes care of the problem input and output.
 */
int main() {
     int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<sum(a,b)<<endl;
    }
    return 0;
}
