#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[1] == 'w' && (s[0] == s[2]))
    {
        cout << "Cute" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}