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
        int n;
        cin >> n;

        //cout << 2 * n << " ";

        for (int i = 1; i < n; i++)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}