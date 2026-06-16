#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        if (!(cin >> a >> b >> c >> d))
            return 0;
        else if (a == b && a == c && a == d)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}