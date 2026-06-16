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

        vector<int> a(n);

        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}