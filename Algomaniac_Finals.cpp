#include <bits/stdc++.h>
using namespace std;
int main()
{
    int attend;
    if (!(cin >> attend) || !(attend >= 1 && attend <= 31))
        return 0;
    if (attend == 17)
        cout << "YAY" << endl;
    else
        cout << "NO" << endl;

    return 0;
}