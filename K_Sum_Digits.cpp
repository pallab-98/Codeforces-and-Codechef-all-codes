#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ind, sum = 0;
    cin >> ind;
    string x;
    cin >> x;

    for (char value : x)
        sum += value-'0';
        
    cout << sum << endl;
    return 0;
}