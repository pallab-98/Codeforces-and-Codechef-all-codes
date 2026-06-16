#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int X, A, B, K;
    cin >> X >> A >> B;
    K = (A * B) - X;
    cout << abs(K) << endl;

    return 0;
}