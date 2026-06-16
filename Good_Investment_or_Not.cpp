#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X >= Y * 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}