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
        string s;
        cin >> s;

        int cntA = 0, cntB = 0;

        for (char c : s)
        {
            if (c == 'A')
                cntA++;
            else
                cntB++;
        }

        if (cntA > cntB)
            cout << 'A' << endl;
        else
            cout << 'B' << endl;
    }

    return 0;
}