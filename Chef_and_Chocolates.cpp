#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int c, x, cost;
        cin >> c >> x >> cost;
        
        cout << (c - x) * cost << endl;
    }

    return 0;
}
