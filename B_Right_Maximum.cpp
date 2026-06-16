#include <bits/stdc++.h>
using namespace std;

/**
 * Logic: 
 * Apnar original nested loop protibar current limit er moddhe 
 * rightmost maximum index khujchilo. 
 * Eta ashole 'Prefix Maximum' change hobar shonkhya.
 * O(n) e korte hole: Jokhoni amra current_max er cheye boro ba soman
 * kono element pai, tar mane holo amader ekta jump ba operation barbe.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int operations = 0;
    int current_max = -1;

    for (int i = 0; i < n; i++) {
        // Jodi current element current_max er soman ba boro hoy, 
        // tobe eta ekta valid operation point.
        if (a[i] >= current_max) {
            current_max = a[i];
            operations++;
        }
    }

    cout << operations << "\n";
}

int main() {
    // Input-Output speed up korar jonno
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}