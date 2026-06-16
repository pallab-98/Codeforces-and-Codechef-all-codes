#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x >= y && x % y == 0)
        cout << "Multiples\n";
    else if (y >= x && y % x == 0)
        cout << "Multiples\n";
    else
        cout << "No Multiples";

    return 0;
}