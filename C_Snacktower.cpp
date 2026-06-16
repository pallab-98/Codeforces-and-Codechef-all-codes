#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1, 0);
    int expected = n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        a[x] = 1;

        bool printed = false;

        while (expected > 0 && a[expected]) {
            cout << expected << " ";
            expected--;
            printed = true;
        }

        cout << "\n";
    }

    return 0;
}