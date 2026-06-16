#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 10))
        return 0;
    while (caseTime--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << x * 4 + y * 2 + z * 0 << endl;
    }

    return 0;
}