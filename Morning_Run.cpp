#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, value;
    if (!(cin >> x >> value) || !(x >= 1 && value <= 1000))
        return 0;
    if (1000 <= (x * 2 + value * 2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}