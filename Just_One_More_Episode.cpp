#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 0 && caseTime <= 100))
        return 0;
    while (caseTime--)
    {
        int x;
        cin >> x;
        if (x > 24)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}