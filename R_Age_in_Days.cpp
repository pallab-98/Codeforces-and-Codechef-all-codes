#include <bits/stdc++.h>
using namespace std;
int main()
{
    int days, years, months;
    if (!(cin >> days) || !(days >= 0 && days <= 10e6))
        return 0;

    years = days / 365;
    days %= 365;
    months = days / 30;
    days %= 30;
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}