#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long removedPos = (r - 1) * m + c;

        long long remaining = n * m - removedPos;

        long long rowChanges = n - r;

        long long ans = remaining + (m - 1) * rowChanges;

        cout << ans << '\n';
    }

    return 0;
}