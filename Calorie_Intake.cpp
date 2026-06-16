#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y, z;
    if (!(cin >> x >> y >> z))
        return 0;
    if (x >= (y * z))
    {
        cout << x - (y * z) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}