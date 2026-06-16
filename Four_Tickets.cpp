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
        int ticketRate;
        cin >> ticketRate;
        if (ticketRate * 4 <= 1000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}