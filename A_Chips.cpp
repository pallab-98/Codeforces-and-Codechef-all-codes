#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;

    int i = 1;

    while (m >= i)
    {
        m -= i;

        i++;

        if (i > n)
            i = 1;
    }

    cout << m << endl;

    return 0;
}