#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    if (!(cin >> x) || !(x >= 1 && x <= 4))
        return 0;
    else if (x >= 1 && x <= 4)
    {
        cout << 1000 * pow(2, 4 - x) << endl;
    }

    return 0;
}