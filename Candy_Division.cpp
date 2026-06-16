#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x >= 3 && x % 3 == 0)

            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}
