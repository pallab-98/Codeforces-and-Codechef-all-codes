#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 6e1))
        return 0;
    while (caseTime--)
    {
        int reach;
        cin >> reach;
        if (reach >= 3e1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}