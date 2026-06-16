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
        int brokenPhone, newPhone;
        cin >> brokenPhone >> newPhone;
        
        if (brokenPhone > newPhone)
            cout << "NEW PHONE\n";
        else if (newPhone > brokenPhone)
            cout << "REPAIR\n";
        else
            cout << "ANY\n";
    }
    return 0;
}