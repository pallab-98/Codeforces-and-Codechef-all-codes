#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b;
    if (!(cin >> t) || !(t >= 1 && t <= 10))
        return 0;
    while (t--)
    {
        cin >> a >> b;
        cout << a - b << endl;
    }
    return 0;
}