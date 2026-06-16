#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cake;
    cin >> cake;

    if (cake >= 5)
        cout << cake * 85 << endl;
    else
        cout << cake * 100 << endl;

    return 0;
}