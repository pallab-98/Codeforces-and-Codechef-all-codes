#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;
    long long value = n * k / a;
    if (value <= 4)
        cout << "int\n";
    else if (value <= 8)
        cout << "double\n";
    else
        cout << "long long\n";

    return 0;
}