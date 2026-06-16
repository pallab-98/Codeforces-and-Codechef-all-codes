#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x, y;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;
        cout << x - y << endl;
    }

    return 0;
}