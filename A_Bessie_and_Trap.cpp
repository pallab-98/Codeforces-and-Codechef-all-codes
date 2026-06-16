#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    long long prefix = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        long long need = a - prefix;
        ans = max(ans, need);

        prefix += b;
    }

    cout << max(0LL, ans) << "\n";

    return 0;
}