#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[4];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }

    int target = sum / 2;

    for (int mask = 0; mask < (1 << 4); mask++)
    {
        int s = 0;

        for (int i = 0; i < 4; i++)
        {
            if (mask & (1 << i))
            {
                s += a[i];
            }
        }

        if (s == target)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}