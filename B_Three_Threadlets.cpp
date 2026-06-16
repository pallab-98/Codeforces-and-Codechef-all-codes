#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long a,b,c;
        cin >> a >> b >> c;

        long long mx = max({a,b,c});
        long long sum = a + b + c;

        if(sum % 3 == 0) {
            long long L = sum / 3;
            if(mx <= 2 * L) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            cout << "NO\n";
        }
    }
}