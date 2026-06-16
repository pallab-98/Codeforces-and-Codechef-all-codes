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
        int x;
        cin >> x;

        if (x < 4)
            cout << "MILD\n";
        else if (x >= 4 && x < 7)
            cout << "MEDIUM\n";
        else
            cout << "HOT\n";
    }
    return 0;
}