#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        bool allOne = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0)
                allOne = false;
        }

        if (allOne || (n % 2 == 1))
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}