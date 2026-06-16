#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while(caseTime--) {
        
        int A,B;
        
        cin>>A>>B;

        int maxNum=max(A,B);
        int sum=A+B;
        cout<<maxNum<<" "<<sum<<endl;

    }
    return 0;
}