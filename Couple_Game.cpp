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
        int Girls, Boys;
        cin >> Girls >> Boys;
        cout << max(Girls, Boys) - min(Girls, Boys) << endl;
    }

    return 0;
}