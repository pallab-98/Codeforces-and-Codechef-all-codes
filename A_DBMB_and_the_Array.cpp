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

        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if (s >= sum && (s - sum) % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}