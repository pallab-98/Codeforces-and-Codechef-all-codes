#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        long long student, individulCost, groupCost;
        cin >> student >> individulCost >> groupCost;

        if (groupCost >= 3 * individulCost)
            cout << student * individulCost << endl;
        else
        {
            long long group = student / 3;
            long long rem = student % 3;

            long long cost = group * groupCost + min(rem * individulCost, groupCost);

            cout << cost << '\n';
        }
    }

    return 0;
}