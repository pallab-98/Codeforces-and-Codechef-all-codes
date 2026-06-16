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
        int num, firstDisit, lastDigit;

        cin >> num;
        firstDisit = num % 10;

        while (num >= 10)
        {
            num = num / 10;
        }

        lastDigit = num;
        int sum = firstDisit + lastDigit;
        cout << sum << endl;
    }
}