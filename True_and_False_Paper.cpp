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
        int questions, correctAns;
        cin >> questions >> correctAns;

        cout << questions - correctAns << endl;
    }
    return 0;
}