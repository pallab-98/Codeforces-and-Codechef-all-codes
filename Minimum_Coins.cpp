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
        int rupees;
        cin >> rupees;
        cout << rupees % 10 << endl;
    }
    return 0;
}