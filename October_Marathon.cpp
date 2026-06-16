#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X;
    if (!(cin >> X) || !(X >= 1 && X <= 10))
        return 0;

    if (X < 3)
        cout << "GOLD" << endl;
    else if (X >= 3 && X < 6)
        cout << "SILVER" << endl;
    else
        cout << "BRONZE" << endl;
    return 0;
}