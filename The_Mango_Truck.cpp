#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int x, y, z, loop = 0;
        cin >> x >> y >> z;
        while (loop <= 100)
        {
            loop++;
            if ((x * loop + y) > z)
            {
                cout << loop - 1 << endl;
                break;
            }
        }
    }
    return 0;
}