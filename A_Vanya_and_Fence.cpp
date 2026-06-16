#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, h;
    cin >> n >> h;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > h)
            ans += 2;
        else
            ans += 1;
    }

    cout << ans << endl;

    return 0;
}