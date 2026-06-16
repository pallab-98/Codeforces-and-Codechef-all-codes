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
        int jerry, tom;
        cin >> jerry >> tom;
        if (tom > jerry)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}