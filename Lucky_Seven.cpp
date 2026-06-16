#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s.length() >= 10)
    {
        cout << s[6] << endl;
    }
    else
        cout << s << endl;

    return 0;
}