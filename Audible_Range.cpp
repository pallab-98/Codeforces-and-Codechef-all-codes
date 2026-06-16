#include <bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTime;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 10e4))
        return 0;
    while (caseTime--)
    {
        long long hertz;
        cin >> hertz;
        if (hertz >= 67 && hertz <= 45e3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}