#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    if (!(cin >> x) || !(x >= 1 && x <= 1000))
        return 0;
    else if (x * 5 <= 60)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}