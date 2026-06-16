#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTest, x, y;
    if (!(cin >> (caseTest) || !(caseTest >= 1 && caseTest <= 100)))
        return 0;
    while (caseTest--)
    {
        cin >> x >> y;
        if (x >= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}