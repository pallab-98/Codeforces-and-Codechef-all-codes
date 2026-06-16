#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    if (!(cin >> x) || !(x >= 1 && x <= 100))
        return 0;
    if (x % 2 == 0 && x > 2)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}