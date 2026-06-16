#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long X, Y;
        cin >> X >> Y;

        if (X >= 30 * Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}