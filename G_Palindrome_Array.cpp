#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int count = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[(n - 1) - i])
            count++;
    }

    if (count == n / 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

/* if (s == vector<int>(s.rbegin(), s.rend()))
    cout << "YES\n";
else
    cout << "NO\n"; */