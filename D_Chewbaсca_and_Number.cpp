#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++)
    {
        int d = x[i] - '0';
        int inv = 9 - d;

        if (i == 0 && inv == 0)
            continue;

        if (inv < d)
            x[i] = inv + '0';
    }
    cout << x << endl;

    return 0;
}