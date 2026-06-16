#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    
    while (caseTest--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x > 3)
            cout << (x * y) + ((x - 1) / 3) * z << endl;
        else
            cout << x * y << endl;
    }
    return 0;
}