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
        int ind;
        cin >> ind;

        string s;
        cin >> s;

        bool value = true;

        for (int i = 0; i < ind; i++)
        {

            if (s[i] == '?' && s[ind - 1 - i] == '?')
            {
                value = false;
                break;
            }
        }

        if (value)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}