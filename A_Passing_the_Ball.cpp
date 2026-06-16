#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        // check if there is "RL" pattern anywhere
        bool found = false;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == 'R' && s[i+1] == 'L') {
                found = true;
                break;
            }
        }

        if(found) {
            cout << 2 << endl;  // only the two students in RL get the ball
        } else {
            cout << n << endl;  // everyone gets the ball
        }
    }
    return 0;
}