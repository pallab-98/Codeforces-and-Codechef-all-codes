#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];

        vector<bool> vis(n + 1, false);

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                int cur = i;
                int len = 0;

                while (!vis[cur])
                {
                    vis[cur] = true;
                    cur = p[cur];
                    len++;
                }

                if (len == 1)
                    ans += 1;
                else
                    ans += (len - 1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}