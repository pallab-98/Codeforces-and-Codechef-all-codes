#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    long long sum = 0, x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    if (sum < 0)
        sum = -sum;

    cout << sum << endl;

    return 0;
}