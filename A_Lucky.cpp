#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while(caseTest--) {
        string str;
        cin >> str;

        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < 3; i++) 
            sum1 += str[i] - '0';
        

        for(int i = 3; i < 6; i++) 
            sum2 += str[i] - '0';
        

        if(sum1 == sum2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}