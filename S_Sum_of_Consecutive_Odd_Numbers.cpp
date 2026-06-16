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
        int x, y, sum = 0;
        cin >> x >> y;

        int low = min(x, y);
        int high = max(x, y);

        for (int i = low + 1; i < high; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}