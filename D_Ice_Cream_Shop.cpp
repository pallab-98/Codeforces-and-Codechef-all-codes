#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> p(n), x(m);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < m; i++) cin >> x[i];

    sort(x.begin(), x.end());

    vector<pair<long long, long long>> events;

    for (int i = 0; i < n; i++) {
        long long hut = i * 100;

        
        auto it = lower_bound(x.begin(), x.end(), hut);

        long long d = LLONG_MAX;

        if (it != x.end())
            d = min(d, abs(*it - hut));
        if (it != x.begin()) {
            it--;
            d = min(d, abs(*it - hut));
        }

        long long L = hut - d + 1; 
        long long R = hut + d - 1;

        if (L <= R) {
            events.push_back({L, p[i]});
            events.push_back({R + 1, -p[i]});
        }
    }

    sort(events.begin(), events.end());

    long long cur = 0, ans = 0;

    for (auto &e : events) {
        cur += e.second;
        ans = max(ans, cur);
    }

    cout << ans << "\n";
}