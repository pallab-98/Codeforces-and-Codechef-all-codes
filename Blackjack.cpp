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
        int a, b;
        cin >> a >> b;
        if (10 >= abs(a + b - 21))
            cout << abs(a + b - 21) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}