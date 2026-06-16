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
        int time;
        cin >> time;
        if (time >= 1 && time <= 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}