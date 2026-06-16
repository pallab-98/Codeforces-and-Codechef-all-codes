#include <bits/stdc++.h>
using namespace std;

int main()
{
    double discount, AfterPrice, OrginalPrice;
    cin >> discount >> AfterPrice;
    OrginalPrice = AfterPrice / (1 - discount / 100.00);
    cout << fixed << setprecision(2) << OrginalPrice << endl;

    return 0;
}