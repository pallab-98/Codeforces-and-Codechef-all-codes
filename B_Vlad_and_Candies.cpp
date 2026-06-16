#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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

        long long mx = a[n - 1];
        long long sec = (n == 1 ? 0 : a[n - 2]);

        if (mx - sec > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}