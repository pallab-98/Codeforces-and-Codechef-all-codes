#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int casetest;
    if (!(cin >> casetest) || !(casetest >= 1 && casetest <= 10e2))
        return 0;
    while (casetest--)
    {
        int x, m;
        cin >> x >> m;
        if (x >= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}