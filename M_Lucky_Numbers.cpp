#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;

    bool found = false;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        bool lucky = true;

        while (num > 0)
        {
            int digit = num % 10;

            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }

            num /= 10;
        }

        if (lucky)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;
}