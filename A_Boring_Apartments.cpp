#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        string x;
        cin >> x;

        int d = x[0] - '0';
        int len = x.length();

        int ans = (d - 1) * 10;
        ans += len * (len + 1) / 2;

        cout << ans << endl;
    }

    return 0;
}