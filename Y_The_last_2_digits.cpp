#include <bits/stdc++.h>

 
using namespace std;
 
int main() {
    
    long long  a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long m = ((a%100) * (b%100)) % 100;
    m = (m * (c%100)) % 100;
    m = (m * (d%100)) % 100;
    if (m < 10)
        cout << "0" << m << endl;
    else
        cout << m << endl;
    return 0;
}