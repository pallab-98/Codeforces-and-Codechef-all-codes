#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t) || !(t >= 1 && t <= 100))
        return 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((x < y) && y <= 12)
            cout << y - x << endl;
    }
    return 0;
}