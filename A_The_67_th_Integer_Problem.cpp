#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while(caseTime--) {
        
        int num,y;
        cin >> num;
        y = min(num+1, 67);
        cout << y << "\n";
    }
}