#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pos = k - 1;

    while (a[pos] == 0)
    {
        pos = (pos + 1) % n;
    }

    cout << pos + 1 << endl;

    return 0;
}