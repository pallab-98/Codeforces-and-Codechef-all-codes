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
        int num1, num2, sum;
        cin >> num1 >> num2 >> sum;
        if (num1 + num2 == sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}