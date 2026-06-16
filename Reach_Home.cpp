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
        int litres, kilometres;
        cin >> litres >> kilometres;

        if (litres * 5 >= kilometres)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}