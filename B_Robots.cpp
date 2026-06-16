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
        int len, m;
        cin >> len >> m;

        vector<string> s(len);

        int minRow = 100, minCol = 100;

        for (int i = 0; i < len; i++)
        {
            cin >> s[i];

            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'R')
                {
                    minRow = min(minRow, i);
                    minCol = min(minCol, j);
                }
            }
        }

        bool ok = false;

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'R' &&
                    i == minRow &&
                    j == minCol)
                {
                    ok = true;
                }
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}