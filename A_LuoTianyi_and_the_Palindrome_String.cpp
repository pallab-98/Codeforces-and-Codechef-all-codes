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

        bool same = true;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[0])
            {
                same = false;
                break;
            }
        }

        if (same)
            cout << -1 << '\n';
        else
            cout << s.size() - 1 << '\n';
    }

    return 0;
}