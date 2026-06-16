#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    if (!(cin >> x >> y) )
        return 0;

    if ((x -= y) >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;

    return 0;
}