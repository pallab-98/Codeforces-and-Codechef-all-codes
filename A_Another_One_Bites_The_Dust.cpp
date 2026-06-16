#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 2 * c + 2 * min(a, b);

    if (a != b)
        ans += 1;

    cout << ans << endl;
    return 0;
}