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

        bool r = false, g = false, b = false;
        bool ok = true;

        for (char c : s)
        {
            if (c == 'r')
                r = true;
            else if (c == 'g')
                g = true;
            else if (c == 'b')
                b = true;

            else if (c == 'R')
            {
                if (!r)
                {
                    ok = false;
                    break;
                }
            }

            else if (c == 'G')
            {
                if (!g)
                {
                    ok = false;
                    break;
                }
            }

            else if (c == 'B')
            {
                if (!b)
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}