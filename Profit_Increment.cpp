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
        int buying, percent;
        cin >> buying >> percent;

        int newprofit = percent + (buying / 10);
        cout << newprofit << endl;
    }

    return 0;
}