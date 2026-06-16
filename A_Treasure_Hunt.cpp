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
        long long x, y, a;
        cin >> x >> y >> a;

        long long rem = a % (x + y);

        if (rem < x)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}