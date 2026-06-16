#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, a1, b, b1, c, c1;
    if (!(cin >> a >> a1 >> b >> b1 >> c >> c1))
        return 0;
    cout << max(a, a1) + max(b, b1) + max(c, c1) << endl;

    return 0;
}