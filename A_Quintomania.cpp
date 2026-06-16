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

        int a[55];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = true;

        for (int i = 0; i < n - 1; i++)
        {
            int d = abs(a[i] - a[i + 1]);

            if (d != 5 && d != 7)
                ok = false;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}