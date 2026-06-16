#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;
    while (caseTime--)
    {
        int hours;
        cin >> hours;
        cout << hours * 60 / 20 << endl;
    }

    return 0;
}