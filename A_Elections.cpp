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
        long long a, b, c;
        cin >> a >> b >> c;

        long long A, B, C;

        if (a > max(b, c))
            A = 0;
        else
            A = max(b, c) - a + 1;

        if (b > max(a, c))
            B = 0;
        else
            B = max(a, c) - b + 1;

        if (c > max(a, b))
            C = 0;
        else
            C = max(a, b) - c + 1;

        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}