#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int nwvalue = 1, oldvalue = 1;
    char key = s[0];
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == key)
        {
            nwvalue++;
            if (nwvalue > oldvalue)
                oldvalue = nwvalue;
        }
        else
        {
            key = s[i];
            nwvalue = 1;
        }
    }
    cout << oldvalue << endl;

    return 0;
}
