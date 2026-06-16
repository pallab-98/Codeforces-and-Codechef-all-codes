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
        int a, x, y;
        cin >> a >> x >> y;

        if ((x < a && y < a) || (x > a && y > a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}