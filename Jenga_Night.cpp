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
        int N, X;
        cin >> N >> X;

        if (N <= X && X % N == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}