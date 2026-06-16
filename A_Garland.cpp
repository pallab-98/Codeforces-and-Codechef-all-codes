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
        string s;
        cin >> s;

        int cnt[10] = {0};

        for (char c : s)
            cnt[c - '0']++;

        int mx = 0;
        for (int i = 0; i < 10; i++)
            mx = max(mx, cnt[i]);

        if (mx == 4)
            cout << -1 << '\n';
        else
            cout << max(4, 2 * mx) << '\n';
    }

    return 0;
}