#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase, K, X;
    if (!(cin >> testCase) || !(testCase >= 1 && testCase <= 5e2))
        return 0;
    while (testCase--)
    {
        cin >> K >> X;
        cout << K * 7 - X << endl;
    }

    return 0;
}