#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            cout << y << endl;
        else
            cout << (y - x) * 2 + x << endl;
    }
    return 0;
}
