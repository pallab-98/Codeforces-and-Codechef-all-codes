#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> b(n), c(m);

        for (int i = 0; i < n; i++) cin >> b[i];
        for (int j = 0; j < m; j++) cin >> c[j];

        sort(c.begin(), c.end());

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int limit = k - b[i];

           
            ans += upper_bound(c.begin(), c.end(), limit) - c.begin();
        }

        cout << ans << "\n";
    }

    return 0;
}