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
        int x, y, z, subcription;
        cin >> x >> y >> z >> subcription;

        if (subcription <= x + y || subcription <= y + z || subcription <= x + z)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}