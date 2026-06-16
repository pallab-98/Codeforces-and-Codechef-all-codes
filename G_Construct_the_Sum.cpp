#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        long long n, s;
        cin >> n >> s;

        long long maxSum = n * (n + 1) / 2;

        if (s > maxSum)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<long long> ans;

        for (long long i = n; i >= 1; i--)
        {
            if (s >= i)
            {
                ans.push_back(i);
                s -= i;
            }
        }

        if (s != 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}