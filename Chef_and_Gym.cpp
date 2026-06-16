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
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y > z && x <= z)
            cout << 1 << endl;
        else if (x + y <= z)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}