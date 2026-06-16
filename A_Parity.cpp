#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int base, n;
    cin >> base >> n;

    vector<int> ara(n);
    for (int i = 0; i < n; i++)
        cin >> ara[i];

    if ((base & 1) == 0)
    {
        if ((ara[n - 1] & 1) == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += ara[i];

        if ((sum & 1) == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }

    return 0;
}