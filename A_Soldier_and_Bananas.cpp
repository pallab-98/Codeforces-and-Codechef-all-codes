#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long eachPrice, hasDoller, totalBanana, borrowDoller, totalPrice = 0;
    cin >> eachPrice >> hasDoller >> totalBanana;

    for (int i = 1; i <= totalBanana; i++)
        totalPrice += eachPrice * i;

    borrowDoller = totalPrice - hasDoller;

    if (borrowDoller < 0)
        cout << 0 << endl;
    else
        cout << borrowDoller << endl;

    return 0;
}