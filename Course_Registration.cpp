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
        int friends, capacity, enrolled;
        cin>>friends>>capacity>>enrolled;

        if ((capacity - enrolled) >= friends)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}