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
        int b, c, h;
        cin >> b >> c >> h;

        int k = min(c + h, b - 1);
        cout << 2 * k + 1 << '\n';
    }

    return 0;
}