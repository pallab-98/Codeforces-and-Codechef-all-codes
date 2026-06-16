#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime, x, y;
    cin >> caseTime;
    while (caseTime--)
    {
        cin >> x;
        if (x >= 80)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}