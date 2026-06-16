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
        int point, prob1, prob2;
        cin >> point >> prob1 >> prob2;

        if (prob1*1 + prob2 * 2 >= point)
            cout << "Qualify\n";
        else
            cout << "NotQualify\n";
    }

    return 0;
}