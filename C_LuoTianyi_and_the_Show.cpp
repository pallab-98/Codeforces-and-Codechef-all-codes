#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);

        int leftCnt = 0, rightCnt = 0;
        set<int> fixedSeats;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == -1)
                leftCnt++;
            else if (a[i] == -2)
                rightCnt++;
            else
                fixedSeats.insert(a[i]);
        }

        vector<int> v(fixedSeats.begin(), fixedSeats.end());

        int k = v.size();

        int ans = min(m, max(leftCnt, rightCnt) + k);

        for (int i = 0; i < k; i++) {
            int seat = v[i];

            // seats possible on left side
            int leftPossible = seat - 1;

            // seats possible on right side
            int rightPossible = m - seat;

            int useLeft = min(leftPossible, leftCnt + i);

            int useRight = min(rightPossible,
                               rightCnt + (k - i - 1));

            ans = max(ans, 1 + useLeft + useRight);
        }

        cout << ans << '\n';
    }

    return 0;
}