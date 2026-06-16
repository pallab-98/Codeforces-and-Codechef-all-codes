#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(false);
    cout.tie(false);

    long long n, k, m;
    cin >> n >> k >> m;

    long long turns = (2 * m + n - 1) / n; // ceil
    cout << turns * k << endl;
    return 0;
}