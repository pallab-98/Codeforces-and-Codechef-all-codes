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
        int friends, burgerPrice, haveMoneny;
        cin >> friends >> burgerPrice >> haveMoneny;
        if (friends * burgerPrice <= haveMoneny)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}