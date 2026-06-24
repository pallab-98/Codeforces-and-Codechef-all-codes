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
        long long k;
        cin >> n >> k;

        vector<long long> a(n);

        long long mx = LLONG_MIN;
        long long mn = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        if (k % 2 == 1)
        {
            for (int i = 0; i < n; i++)
                cout << mx - a[i] << " ";
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << a[i] - mn << " ";
        }

        cout << endl;
    }

    return 0;
}