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

        int buy, sell;
        cin >> buy >> sell;
        if (buy > sell)
            cout << "LOSS\n";
        else if (buy == sell)
            cout << "NEUTRAL\n";
        else
            cout << "PROFIT\n";
    }
}