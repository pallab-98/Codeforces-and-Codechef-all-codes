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
        int A, B, C;
        cin >> A >> B >> C;

        if (A > B)
        {
            if (A > B)
                cout << "Setter\n";
            else
                cout << "Editorialist\n";
        }
        else if (B > C)
            cout << "Tester\n";
        else
            cout << "Editorialist\n";
    }
    return 0;
}