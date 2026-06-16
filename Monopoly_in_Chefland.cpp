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
        
        if (x > y + z || y > x + z || z > x + y)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}