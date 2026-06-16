#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool ok = false;

        for (int i = 1; i < s.size(); i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if (b[0] == '0') continue;

            if (stoll(b) > stoll(a)) {
                cout << a << " " << b << "\n";
                ok = true;
                break;
            }
        }

        if (!ok) cout << -1 << "\n";
    }
}