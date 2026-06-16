#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        vector<long long> killed;

        
        for (int i = 0; i < n; i++) {
            if (a[i] <= c) {
                c += a[i];
                killed.push_back(a[i]);
            } else break;
        }

        
        sort(killed.rbegin(), killed.rend());

        for (int i = 0; i < (int)killed.size() && k > 0; i++) {
            long long use = k;  
            killed[i] += use;
            c += use;
            k = 0;
        }

        cout << c << "\n";
    }

    return 0;
}