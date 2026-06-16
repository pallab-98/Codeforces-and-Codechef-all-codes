#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < n;)
    {

        if (i + 1 < n && s[i] != s[i + 1])
        {
            ans++;
            i += 2;
        }
        else
        {
            ans++;
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}