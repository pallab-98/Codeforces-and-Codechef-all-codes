#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    if (!(cin >> x >> y >> k))
        return 0;

    if (abs(x - y) <= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
