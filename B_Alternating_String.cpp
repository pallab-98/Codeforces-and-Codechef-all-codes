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
        int acount = 0, bcount = 0, total = 0;
        for (char value : s)
            if (value == 'a')
                acount++;
            else
                bcount++;
        total=abs(acount-bcount);

        if (acount == 0 ||total>=acount )
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}