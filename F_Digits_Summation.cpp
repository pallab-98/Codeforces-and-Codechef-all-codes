#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, last1, last2;
    if (!(cin >> a >> b))
        return 0;
    else
    {
        last1 = a % 10;
        last2 = b % 10;
        cout << last1 + last2 << endl;
    }

    return 0;
}