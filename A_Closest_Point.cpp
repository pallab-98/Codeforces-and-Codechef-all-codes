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

        vector<int> x(n), d(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                d[i] = x[1] - x[0];
            else if (i == n - 1)
                d[i] = x[n - 1] - x[n - 2];
            else
                d[i] = min(x[i] - x[i - 1], x[i + 1] - x[i]);
        }

        int L = -1000, R = 1000;

        for (int i = 0; i < n; i++)
        {
            L = max(L, x[i] - d[i]);
            R = min(R, x[i] + d[i]);
        }

        bool ok = false;

        for (int p = L; p <= R; p++)
        {
            bool exist = false;
            for (int v : x)
                if (v == p)
                    exist = true;

            if (!exist)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}