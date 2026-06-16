#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    if (!(cin >> a >> b >> c) || !(a != b && a != b && b != c))
        return 0;
    if (a > b && a > c)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}