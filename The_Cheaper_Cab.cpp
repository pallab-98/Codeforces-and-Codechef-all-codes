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
        int x, y;
        cin >> x >> y;

        if (x < y)
            cout << "FIRST\n";
        else if (x == y)
            cout << "ANY\n";
        else
            cout << "SECOND\n";
    }
    return 0;
}
