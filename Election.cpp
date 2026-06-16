#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a / 2 + 1 > b)
        cout << a / 2 + 1 - b << endl;
    else
        cout << 0;
    return 0;
}