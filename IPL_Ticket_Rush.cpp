#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t) || !(t >= 1 && t <= 1000))
        return 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            cout << x - y << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}