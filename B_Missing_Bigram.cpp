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

        int n;
        cin >> n;

        vector<string> s(n - 2);

        for (int i = 0; i < n - 2; i++)
            cin >> s[i];

        string ans = s[0];
        bool found = false;

        for (int i = 1; i < n - 2; i++)
        {
            if (s[i - 1][1] == s[i][0])

                ans += s[i][1];

            else
            {
                ans += s[i];
                found = true;
            }
        }

        if (!found)
            ans += 'a';

        cout << ans << "\n";
    }
    return 0;
}