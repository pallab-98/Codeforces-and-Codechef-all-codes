#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int totalL = 0, totalO = 0;

    for (char c : s) {
        if (c == 'L') totalL++;
        else totalO++;
    }

    int leftL = 0, leftO = 0;

    for (int k = 1; k < n; k++) {
        if (s[k - 1] == 'L') leftL++;
        else leftO++;

        int rightL = totalL - leftL;
        int rightO = totalO - leftO;

        if (leftL != rightL && leftO != rightO) {
            cout << k << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
    return 0;
}