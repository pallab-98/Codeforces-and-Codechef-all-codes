#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseTest;
    cin >> caseTest;

    // 1-based indexing use করবো
    long long C[105][105];

    // Input নেওয়া (only i < j values দেওয়া আছে)
    for(int i = 1; i <= caseTest; i++) {
        for(int j = i + 1; j <= caseTest; j++) {
            cin >> C[i][j];
        }
    }

    // Check all (a, b, c)
    for(int a = 1; a <= caseTest; a++) {
        for(int b = a + 1; b <= caseTest; b++) {
            for(int c = b + 1; c <= caseTest; c++) {
                if(C[a][b] + C[b][c] < C[a][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}