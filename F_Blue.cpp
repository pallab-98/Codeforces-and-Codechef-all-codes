#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, t, gmail, fullStr;
    cin >> s >> t;

    for (char &c : s)
        c = tolower(c);

    for (char &c : t)
        c = tolower(c);

    gmail = "@gmail.com";

    fullStr = s[0] + t + gmail;
    cout << fullStr << endl;

    return 0;
}