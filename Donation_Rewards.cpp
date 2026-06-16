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
        int bloodDonate;
        cin >> bloodDonate;

        if (bloodDonate <= 3)
            cout << "BRONZE\n";
        else if (bloodDonate > 3 && bloodDonate <= 6)
            cout << "SILVER\n";
        else
            cout << "GOLD\n";
    }
    return 0;
}