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
        int k;
        cin >> k;

        if (k % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}