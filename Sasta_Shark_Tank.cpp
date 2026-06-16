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
        int A, B;
        cin >> A >> B;
        if (A * 10 > B * 5)
            cout << "FIRST\n";
        else if (A * 10 < B * 5)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }

    return 0;
}