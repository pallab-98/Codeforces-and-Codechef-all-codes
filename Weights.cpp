#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == x || w == y || w == z || w == (x + y) || w == (x + z) || w == (y + z) || w == (x + y + z))
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
