#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 20))
        return 0;
    while (caseTime--)
    {
        int x;
        cin >> x;
        if (x < 3)
            cout << "LIGHT\n";
        else if (x >= 3 && x < 7)
            cout << "MODERATE\n";
        else
            cout << "HEAVY\n";
    }

    return 0;
}