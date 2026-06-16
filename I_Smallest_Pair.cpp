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

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = INT_MAX;

        // i = 0 দিয়ে শুরু
        int mini = a[0] - 0;

        for (int j = 1; j < n; j++)
        {
            ans = min(ans, mini + a[j] + j);
            mini = min(mini, a[j] - j);
        }

        cout << ans << "\n";
    }
    return 0;
}