#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime, x, y;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 1e3))
        return 0;
    while (caseTime--)
    {
        cin >> x >> y;
        cout << (10 * x) + (90 * y) << endl;
    }

    return 0;
}