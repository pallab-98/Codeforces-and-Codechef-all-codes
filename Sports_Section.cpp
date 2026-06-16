#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    if (!(cin >> x) || !(x >= 1 && x <= 10))
        return 0;
    else if (x >= 8 && x <= 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}