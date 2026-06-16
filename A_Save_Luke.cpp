#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;

    double ans = (L - d) / (v1 + v2);

    cout << fixed << setprecision(20) << ans << endl;

    return 0;
}