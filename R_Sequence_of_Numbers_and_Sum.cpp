#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y;

    while (cin >> x >> y)
    {
        if (x <= 0 || y <= 0)
            break;

        int start = min(x, y);
        int end = max(x, y);

        int sum = 0;

        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}