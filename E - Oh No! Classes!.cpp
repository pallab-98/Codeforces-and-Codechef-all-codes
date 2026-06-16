#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int a[3], b[3];
        for(int i=0;i<3;i++) cin >> a[i] >> b[i];

        // Sort intervals by start time (bubble sort for simplicity)
        for(int i=0;i<2;i++)
            for(int j=i+1;j<3;j++)
                if(a[i]>a[j]) {
                    swap(a[i],a[j]);
                    swap(b[i],b[j]);
                }

        int start = a[0], end = b[0], total = 0;

        for(int i=1;i<3;i++) {
            if(a[i] <= end) end = max(end, b[i]); // merge
            else {
                total += end - start + 1;
                start = a[i];
                end = b[i];
            }
        }
        total += end - start + 1; // last interval
        cout << total << "\n";
    }
    return 0;
}