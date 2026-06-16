#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, s1;
    cin.ignore();
    getline(cin, s);
    getline(cin, s1);

    for (char &c : s)
        c = tolower(c);

    for (char &c : s1)
        c = tolower(c);

    if (s == s1)
        cout << s << endl;

    else if (s < s1)
        cout << s << endl;

    else
        cout << s1 << endl;

    return 0;
}