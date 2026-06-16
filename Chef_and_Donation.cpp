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
        cout << max(x, y) - min(x, y) << endl;
    }
    return 0;
}