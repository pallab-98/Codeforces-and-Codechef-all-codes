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
        long long x, y;
        cin >> x >> y;

        long long k = y / x;

        if (k > 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}