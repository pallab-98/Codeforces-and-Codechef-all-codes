#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int day, tablets;
        cin >> day >> tablets;
        if (day * 3 <= tablets)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}