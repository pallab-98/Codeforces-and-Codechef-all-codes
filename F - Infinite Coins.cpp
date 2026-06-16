#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numCoin,checkCoin;
    cin>>numCoin>>checkCoin;
    
    if(numCoin%500<=checkCoin)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return 0;
}

/*     int N, A;
    cin >> N >> A;

    int remainder = N % 500;

    if (remainder <= A) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    } */


