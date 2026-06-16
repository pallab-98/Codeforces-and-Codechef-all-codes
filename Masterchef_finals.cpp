#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x;
        if (x >= 1 && x <= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}