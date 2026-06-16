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
        long long value;
        cin >> value;

        long long sq = sqrt(value);

        long long cb = cbrt(value);
        while ((cb + 1) * (cb + 1) * (cb + 1) <= value)
            cb++;
        while (cb * cb * cb > value)
            cb--;

        long long sx = pow(value, 1.0 / 6);
        while (pow(sx + 1, 6) <= value)
            sx++;
        while (pow(sx, 6) > value)
            sx--;

        cout << sq + cb - sx << endl;
    }
}