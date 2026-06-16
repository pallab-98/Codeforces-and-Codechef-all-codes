#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int n, x, k, value;
        cin >> n >> x >> k;

        if (k > x)
        {
            value = k / x;
            cout << min(value, n) << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}