#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<tuple<int, int, int>> a(m);
        int x, y, v;
        for (int i = 0; i < m; i++)
        {

            cin >> x >> y >> v;

            a[i] = {x, y, v};
        }

        vector<int> dp(n + 1, 0);

        for (int i = m - 1; i >= 0; i--)
        {
            auto [x, y, v] = a[i];

            int oldx = dp[x];
            int oldy = dp[y];

            dp[x] = v + oldy;
            dp[y] = v + oldx;
        }

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, dp[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}