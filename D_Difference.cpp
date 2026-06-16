#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    if (!(cin >> a >> b >> c >> d))
        return 0;
    else
    {
        long long x = ((a * b) - (c * d));
        cout << "Difference = " << x << endl;
    }
    return 0;
}