#include <bits/stdc++.h>
using namespace std;

int main() {
    int count;
    cin>>count;
    int tempC1 = count; 
    int tempC2 = count; 

    tempC1+= 1; 
    tempC2-=1; 

    count = tempC1;    
    count = tempC2;  

    cout << "Final count: " << count << endl;

}
