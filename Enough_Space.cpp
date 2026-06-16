#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 100))
        return 0;
    while (caseTime--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        if (N >= Y * 2 + X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}