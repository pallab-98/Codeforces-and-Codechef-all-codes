#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    if (n % 3 != 0)
        cout << 1 << " " << 1 << " " << n - 2 << endl;
    else
        cout << 1 << " " << 4 << " " << n - 5 << endl;

    return 0;
}