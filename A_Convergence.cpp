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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = n;

        int pref = 0;
        int i = 0;

        while (i < n)
        {
            int j = i;
            while (j < n && a[j] == a[i])
                j++;

            int cnt = j - i;
            ans = min(ans, max(pref, n - pref - cnt));

            pref += cnt;
            if (j < n)
                ans = min(ans, max(pref, n - pref));

            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}