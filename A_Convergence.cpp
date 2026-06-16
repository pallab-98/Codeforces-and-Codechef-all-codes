#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sixseven;
    cin >> sixseven;

    while (sixseven--) {
        int n;
        cin >> n;

        map<long long, int> mp;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mp[x]++;
        }

        int mx = 0;

        for (auto &p : mp) {
            mx = max(mx, p.second);
        }

        cout << n - mx << '\n';
    }

    return 0;
}