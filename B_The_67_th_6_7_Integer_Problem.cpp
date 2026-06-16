#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int a[7];
        int total = 0, sum = 0;

        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        int cal = INT_MIN;

        for (int i = 0; i < 7; i++)
        {
            sum = -total + 2 * a[i]; // try making a[i] positive
            cal = max(cal, sum);
        }

        cout << cal << endl;
    }

    return 0;
}