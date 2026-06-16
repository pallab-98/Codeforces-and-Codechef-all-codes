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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int firstCost, secondCost;
        firstCost = x1 + y1;
        secondCost = x2 + y2;
        cout << min(firstCost, secondCost) << endl;
    }
    return 0;
}