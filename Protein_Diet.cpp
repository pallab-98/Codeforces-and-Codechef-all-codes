#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    if (!(cin >> x >> y))
        return 0;
    if (x > y || y == x)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}