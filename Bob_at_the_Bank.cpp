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
        int currentBalance, deposite, bankCharge, month;
        cin >> currentBalance >> deposite >> bankCharge >> month;

        cout << currentBalance + ((deposite - bankCharge) * month) << endl;
    }
}