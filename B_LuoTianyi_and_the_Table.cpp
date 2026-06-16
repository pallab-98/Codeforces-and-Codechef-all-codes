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
        long long n, m;
        cin >> n >> m;

        vector<long long> b(n * m);

        for (auto &x : b)
            cin >> x;

        sort(b.begin(), b.end());

        long long mn = b[0];
        long long mn2 = b[1];

        long long mx = b.back();
        long long mx2 = b[b.size() - 2];

        long long big = max(n, m);
        long long small = min(n, m);

        long long ans =
            (mx - mn) * (big - 1) * small +
            max(mx - mn2, mx2 - mn) * (small - 1);

        cout << ans << '\n';
    }
}