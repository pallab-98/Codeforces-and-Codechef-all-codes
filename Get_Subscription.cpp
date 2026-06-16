#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime, x;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 100))
        return 0;
    while (caseTime--)
    {
        cin >> x;
        if (x > 30)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
