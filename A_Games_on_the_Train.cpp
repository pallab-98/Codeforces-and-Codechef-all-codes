#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        cin >> n;

        int mx = 0, mn = 1e9;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }

        cout << mx - mn + 1 << "\n";
    }
    return 0;
}