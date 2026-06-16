#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    if (Y - X >= -3 && Y - X <= 2)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}