#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1), prefix(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long sum = prefix[r] - prefix[l - 1];
        cout << sum << '\n';
    }

    return 0;
}