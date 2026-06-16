#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int rem = n - i * a - j * b;
            if (rem < 0)
                continue;

            if (rem % c == 0)
            {
                int k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }

    cout << ans << endl;

    return 0;
}