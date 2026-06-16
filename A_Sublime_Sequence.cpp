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

        int x, n;
        cin >> x >> n;

        if (n % 2 == 0)
            cout << 0 << '\n';
        else
            cout << x << '\n';
    }

    return 0;
}