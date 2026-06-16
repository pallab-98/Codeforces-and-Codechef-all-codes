#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXL = 21; // 2^20 - 1 = 1048575 > 1e6

    vector<long long> W(MAXL + 1, 0), D(MAXL + 1, 0);

    for (int n = 1; n <= MAXL; n++) {
        W[n] = W[n - 1];
        D[n] = D[n - 1];

        long long sz = 1LL << (n - 1);

        if (n % 2 == 1) W[n] += sz; // top layer is white
        else D[n] += sz;
    }

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        int ans = 0;

        for (int n = 1; n <= MAXL; n++) {
            bool ok =
                (a >= W[n] && b >= D[n]) ||
                (a >= D[n] && b >= W[n]);

            if (ok) ans = n;
            else break;
        }

        cout << ans << '\n';
    }

    return 0;
}