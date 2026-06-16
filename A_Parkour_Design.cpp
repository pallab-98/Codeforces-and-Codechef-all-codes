#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        long long x, y;
        cin >> x >> y;

        if ((x - 2 * y) % 3 == 0 && (2 * y <= x) && (4 * y >= -x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}