#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    if (!(cin >> a >> b) || !(a >= 1 && b <= 50))
        return 0;
    cout << a + b << "1" << endl;
    return 0;
}