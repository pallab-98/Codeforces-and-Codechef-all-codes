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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                a++;
            else
                b++;
        }
        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}