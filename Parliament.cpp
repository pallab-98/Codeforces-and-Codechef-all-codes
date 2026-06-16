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
        int members, vote;
        cin >> members >> vote;

        if ((vote * 2) >= members)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}