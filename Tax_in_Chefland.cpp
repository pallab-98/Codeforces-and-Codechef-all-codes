#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTime, income;
    if (!(cin >> caseTime) || !(caseTime >= 1 && caseTime <= 100))
        return 0;
    while (caseTime--)
    {
        cin >> income;
        if (income > 100)
        {
            cout << income - 10 << endl;
        }
        else
            cout << income << endl;
    }

    return 0;
}