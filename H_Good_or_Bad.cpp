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
        string s;
        cin >> s;

        if (s.find("010") != string::npos || s.find("101") != string::npos)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }

    return 0;
}