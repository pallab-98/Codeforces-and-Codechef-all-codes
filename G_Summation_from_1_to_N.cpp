#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum;
    if (!(cin >> n))
        return 0;
    else
    {
        sum = n * (n + 1) / 2;
        cout << sum;
    }

    return 0;
}