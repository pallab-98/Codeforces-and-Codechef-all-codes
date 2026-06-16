#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T) || !(T >= 1 && T <= 1e3))
        return 0;

    while (T--)
    {
        int x, y;
        cin >> x >> y;
        if (x != y && x > y)
        {
            cout << "A" << endl;
        }
        else
            cout << "B" << endl;
    }

    return 0;
}