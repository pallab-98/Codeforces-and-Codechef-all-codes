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
        int x, y;
        cin >> x >> y;

        if (y >= -abs(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}