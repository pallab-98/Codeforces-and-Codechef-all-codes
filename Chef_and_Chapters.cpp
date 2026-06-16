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
        int courses, units, chpaters;
        cin >> courses >> units >> chpaters;
        cout << courses * (units * chpaters) << endl;
    }
}