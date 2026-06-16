#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int leng = s.size();
    int hig = 0;

    for (char cha : s)
    {
        if (isupper(cha))
            hig++;
    }

    if (hig > leng / 2)
    {

        for (char &cha : s)
            cha = toupper(cha);
    }
    else
    {

        for (char &cha : s)
            cha = tolower(cha);
    }

    cout << s;

    return 0;
}