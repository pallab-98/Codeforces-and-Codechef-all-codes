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
        int bikes, cars;
        cin >> bikes >> cars;
        cout << 2*(bikes + cars * 2) << endl;
    }
    return 0;
}