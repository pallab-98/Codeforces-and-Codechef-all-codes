#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int n, x;

        cin >> n >> x;
        cout << min(x, n - x) << endl;
    }

    return 0;
}