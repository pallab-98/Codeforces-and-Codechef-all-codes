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
        int currentVolium, changeVolium;
        cin >> currentVolium >> changeVolium;

        cout << abs(currentVolium - changeVolium) << endl;
    }
    return 0;
}