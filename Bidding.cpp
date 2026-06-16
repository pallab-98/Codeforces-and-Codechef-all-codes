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
        int Alice, Bob, charlie;
        cin >> Alice >> Bob >> charlie;
        if (Alice > Bob)
        {
            if (Alice > charlie)
                cout << "Alice\n";
            else
                cout << "Charlie\n";
        }
        else if (Bob > charlie)
            cout << "Bob\n";
        else
            cout << "Charlie\n";
    }
    return 0;
}