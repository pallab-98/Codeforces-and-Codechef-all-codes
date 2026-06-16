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
        string L, R;
        cin >> L >> R;
        while (L.size() < R.size())
            L = '0' + L;

        while (R.size() < L.size())
            R = '0' + R;

        int n = L.size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (L[i] != R[i])
            {
                ans += (R[i] - L[i]);
                ans += 9 * (n - i - 1);
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}