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
        long long n, k;
        cin >> n >> k;

        long long l = n - k + 1;

        long long oddCount = (n + 1) / 2 - (l / 2);

        if (oddCount % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}