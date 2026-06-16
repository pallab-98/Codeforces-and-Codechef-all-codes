#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 100))
        return 0;
    while (caseTime--)
    {
        int n, m;
        cin >> n >> m;
        cout << (n * 5) + (m * 7) << endl;
    }

    return 0;
}