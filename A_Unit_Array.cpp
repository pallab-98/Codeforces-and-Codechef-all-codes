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
        int n;
        cin >> n;

        int neg = 0, pos = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == -1)
                neg++;
            else
                pos++;
        }

        int ans = 0;
        while (neg > pos)
        {
            neg--;
            pos++;
            ans++;
        }
        if (neg % 2 == 1)
            ans++;

        cout << ans << endl;
    }

    return 0;
}