#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char s[1005];
    cin >> s;

    int len = strlen(s);
    bool ok = true;

    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
        {
            ok = false;
            break;
        }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}