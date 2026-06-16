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

        string s;
        cin >> s;

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] == s[i + 1])
                dp[i][i + 1] = true;
        }

        for (int len = 3; len <= n; len++)
        {

            for (int l = 0; l + len - 1 < n; l++)
            {

                int r = l + len - 1;

                if (s[l] == s[r])
                {

                    if (len == 2 || dp[l + 1][r - 1])
                        dp[l][r] = true;
                }

                for (int k = l; k < r && !dp[l][r]; k++)
                {

                    if (dp[l][k] && dp[k + 1][r])
                        dp[l][r] = true;
                }
            }
        }

        cout << (dp[0][n - 1] ? "YES" : "NO") << '\n';
    }
    return 0;
}