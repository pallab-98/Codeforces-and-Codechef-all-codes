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
        int assignment, minutes, remindDay;
        cin >> assignment >> minutes >> remindDay;

        if (assignment * minutes <= remindDay * 24 * 60)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}