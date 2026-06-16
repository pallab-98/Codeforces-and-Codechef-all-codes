#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b;
    cin >> a >> b;
    if (a % b != 0)
        cout << a / b + 1 << endl;
    else
        cout << a / b << endl;

    return 0;
}
