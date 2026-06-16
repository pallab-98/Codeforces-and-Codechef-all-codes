#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int withdraw;
    double currentBalance, charge = 0.50;
    cin >> withdraw >> currentBalance;

    if (withdraw % 5 == 0 && currentBalance >= (double)withdraw + charge)
    {
        double newbalance = currentBalance - (withdraw + charge);
        cout << fixed << setprecision(2) << newbalance << endl;
    }
    else
        cout << fixed << setprecision(2) << currentBalance << endl;

    return 0;
}