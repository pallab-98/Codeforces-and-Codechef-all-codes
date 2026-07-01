#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int X, Y;
        cin >> X >> Y;

        int ans = 0;

        while (X > Y)
        {
            ans += (X + 9) / 10;
            X--;
        }

        cout << ans << endl;
    }

    return 0;
}