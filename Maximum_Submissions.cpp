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
        int minutes;
        cin >> minutes;

        cout << minutes * 60 / 30 << endl;
    }
    return 0;
}