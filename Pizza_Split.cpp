#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    if (!(cin >> x))
        return 0;
    if (x >= 1 && x <= 10)
    {
        if (x%2==0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}