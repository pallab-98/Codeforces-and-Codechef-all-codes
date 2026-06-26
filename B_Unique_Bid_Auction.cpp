#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        vector<int> freq(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int mn = INT_MAX;
        int ans = -1;

        for (int i = 1; i <= n; i++) {
            if (freq[a[i]] == 1 && a[i] < mn) {
                mn = a[i];
                ans = i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}