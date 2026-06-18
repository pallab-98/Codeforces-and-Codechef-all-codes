#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int len;
        cin >> len;

        vector<int> ara(len);

        for (int i = 0; i < len; i++)
            cin >> ara[i];

        long long ans = 0;
        int mn = ara[0];

        for (int i = 0; i < len; i++) {
            mn = min(mn, ara[i]);
            ans += mn;
        }

        cout << ans << endl;
    }

    return 0;
}