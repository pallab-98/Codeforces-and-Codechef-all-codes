#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char sign;
    cin >> sign;
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int rep;
        cin >> rep;

        for (int i = 0; i < rep; i++)
        {
            cout << sign;
        }
        cout << endl;
    }
    return 0;
}