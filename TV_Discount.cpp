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
        int fistPrice, SecondPrice, fistDiscount, secondDiscount;
        cin >> fistPrice >> SecondPrice >> fistDiscount >> secondDiscount;

        if ((fistPrice - fistDiscount) > (SecondPrice - secondDiscount))
            cout << "Second\n";
        else if ((fistPrice - fistDiscount) < (SecondPrice - secondDiscount))
            cout << "First\n";
        else
            cout << "Any\n";
    }
    return 0;
}