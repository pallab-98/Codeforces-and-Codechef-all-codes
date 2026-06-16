#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] > 1)
                ans += a[i];
        }

        bool suffixOne = false;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
                suffixOne = true;
            else
                break;
        }

        if (suffixOne)
            ans += 1;

        cout << ans % MOD << '\n';
    }
    return 0;
}