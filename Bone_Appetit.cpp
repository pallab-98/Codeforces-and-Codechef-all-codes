#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y;
    if (!(cin >> n >> m >> x >> y) || !(n >= 0 && m <= 1e2) || !(x >= 0 && y <= 1e3))
        return 0;
    cout << (n * x) + (m * y) << endl;

    return 0;
}