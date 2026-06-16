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
        long long n;
        cin >> n;

        long long ans = 1;
        while ((ans << 1) <= n)
            ans <<= 1;

        cout << ans << endl;
    }

    return 0;
}