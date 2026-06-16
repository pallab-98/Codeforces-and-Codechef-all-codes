#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    long long k;

    cin >> n >> m >> k;

    vector<long long> mn(m + 1, 1e18);

    for (int i = 0; i < n; i++)
    {
        int r;
        long long c;

        cin >> r >> c;

        mn[r] = min(mn[r], c);
    }

    long long total = 0;

    for (int i = 1; i <= m; i++)

        total += mn[i];

    cout << min(total, k) << '\n';

    return 0;
}