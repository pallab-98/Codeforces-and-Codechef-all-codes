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
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (x - w > y * z)
            cout << "Unfilled\n";
        else if (x - w < y * z)
            cout << "overflow\n";
        else
            cout << "filled\n";
    }
    return 0;
}