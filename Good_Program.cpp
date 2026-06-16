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
        int A;
        cin >> A;

        if (A % 4 == 0)
            cout << "Good\n";
        else
            cout << "Not Good\n";
    }

    return 0;
}