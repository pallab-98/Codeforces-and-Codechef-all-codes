#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int ans = 0;

        while (X > Y) {
            ans += (X + 9) / 10;
            X--;
        }

        cout << ans << "\n";
    }

    return 0;
}