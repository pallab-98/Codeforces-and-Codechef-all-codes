#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase, n;
    if (!(cin >> testCase) || !(testCase >= 1 && testCase <= 10))
        return 0;
    while (testCase--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}