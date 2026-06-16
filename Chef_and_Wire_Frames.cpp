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
        long long length, width, perCmCost, periphery;
        cin >> length >> width >> perCmCost;

        periphery = 2 * (length + width);

        cout << periphery * perCmCost << endl;
    }
    return 0;
}