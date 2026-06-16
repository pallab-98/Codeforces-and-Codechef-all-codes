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
        int km;
        cin >> km;

        if (km > 300)
            cout << km * 10 << endl;
        else
            cout << 300 * 10 << endl;
    }
    return 0;
}