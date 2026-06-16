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
        int chil, have;
        cin >> chil >> have;
        
        if (chil > have)
        {
            if ((chil - have) % 4 != 0)
            {
                cout << ((chil - have) / 4) + 1 << endl;
            }
            else
                cout << ((chil - have) / 4) << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}