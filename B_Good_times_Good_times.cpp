#include <bits/stdc++.h>
using namespace std;

bool good(long long n) {
    bool vis[10] = {0};
    int cnt = 0;

    if (n == 0) return true;

    while (n > 0) {
        int d = n % 10;
        if (!vis[d]) {
            vis[d] = true;
            cnt++;
        }
        n /= 10;
    }

    return cnt <= 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool found = false;

        for (int d = 1; d <= 9 && !found; d++) {
            long long y = 0;
            for (int len = 1; len <= 10; len++) {
                y = y * 10 + d;
                if (y > 1000000000LL) break;

                if (good(x * y)) {
                    cout << y << "\n";
                    found = true;
                    break;
                }
            }
        }
    }

    return 0;
}