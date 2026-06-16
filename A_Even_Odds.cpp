#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, total_odd, positon;
    cin >> n >> positon;

    total_odd = (n + 1) / 2;

    if (positon <= total_odd)
        cout << 2 * positon - 1 << endl;
    else
        cout << 2 * (positon - total_odd) << endl;

    return 0;
}