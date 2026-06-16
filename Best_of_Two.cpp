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
        int x, y;
        cin >> x >> y;
        cout << max(x, y) << endl;
    }

    return 0;
}