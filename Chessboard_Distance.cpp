#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        
        int diffX = abs(x1 - x2);
        int diffY = abs(y1 - y2);
        
        cout << max(diffX, diffY) << "\n";
    }
    return 0;
}