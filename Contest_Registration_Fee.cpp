#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int X, Y;
    cin >> X >> Y;

    if(Y <= X)
        cout << 0 <<endl;
    else
        cout << 100 <<endl;

    return 0;
}