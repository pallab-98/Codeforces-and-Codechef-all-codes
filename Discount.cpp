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
        int discount, productPrice = 100;
        cin >> discount;
        cout << productPrice - discount << endl;
    }
    return 0;
}