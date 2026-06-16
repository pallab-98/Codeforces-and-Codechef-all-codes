#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            count++;
        }

        ans = min(ans, count);
    }

    cout << ans << endl;

    return 0;
}