#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;

    int remaining = 240 - k;
    int sum = 0, count = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;

        if (sum <= remaining)
            count++;
        else
            break;
    }

    cout << count << endl;

    return 0;
}