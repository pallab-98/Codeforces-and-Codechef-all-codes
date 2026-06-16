#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases, bloodDonetions, collected;
    if (!(cin >> testCases))
        return 0;
    while (testCases--)
    {

        if (!(cin >> collected >> bloodDonetions) || !(bloodDonetions >= 1 && bloodDonetions <= collected) || !(collected >= bloodDonetions && collected <= 20))
            return 0;
        if (collected >= bloodDonetions)
        {
            cout << collected - bloodDonetions << endl;
        }
    }

    return 0;
}