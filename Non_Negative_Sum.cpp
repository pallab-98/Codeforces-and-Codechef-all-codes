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
        int n, poSum = 0, cal = 0;
        cin >> n;

        int ara[n];

        for (int i = 0; i < n; i++)
            cin >> ara[i];
        sort(ara, ara + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (poSum + ara[i] >= 0)
            {
                poSum += ara[i];
                cal++;
            }
        }

        cout << cal << endl;
    }

    return 0;
}