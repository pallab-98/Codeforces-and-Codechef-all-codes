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
        int friends, leftshose, leftneed, rightneed;
        cin >> friends >> leftshose;

        leftneed = max(0, friends - leftshose);
        rightneed = friends;

        cout << leftneed + rightneed << endl;
    }
    return 0;
}