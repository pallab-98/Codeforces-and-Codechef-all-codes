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
        long long x, y, k;
        cin >> x >> y >> k;

        if (y < x)
            cout << x << '\n';
        else
            cout << y + max(0LL, y - x - k) << '\n';
    }
    return 0;
}