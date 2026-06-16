#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, a, totol_Tiles;
    cin >> n >> m >> a;

    totol_Tiles = ceil((double)n / a) * ceil((double)m / a);
    cout << totol_Tiles << endl;

    return 0;
}
// long long tiles = ((n + a - 1) / a) * ((m + a - 1) / a);
