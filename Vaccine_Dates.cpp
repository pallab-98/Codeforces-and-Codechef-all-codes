#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a < b)
            cout << "Too Early" << endl;

        else if (a > c)
            cout << "Too Late" << endl;

        else
            cout << "Take second dose now" << endl;
    }

    return 0;
}