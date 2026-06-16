#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    for (char &c : s)
    {
        if (islower(c))
            c = toupper(c);

        else if (isupper(c))
            c = tolower(c);
            
        else if (c == ',')
            c = ' ';
    }
    cout << s << endl;

    return 0;
}