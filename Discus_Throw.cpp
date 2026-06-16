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
        int A, B, C;
        cin >> A >> B >> C;

        cout << max(A, max(B, C)) << endl;
    }
    return 0;
}