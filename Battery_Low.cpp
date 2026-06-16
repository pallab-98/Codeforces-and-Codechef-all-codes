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
        int percentage;
        cin >> percentage;
        
        if (percentage <= 15)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
