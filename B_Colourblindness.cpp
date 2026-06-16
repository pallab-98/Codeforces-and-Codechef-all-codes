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
        int len;
        cin >> len;

        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < len; i++)
        {
            if (s1[i] == 'G')
                s1[i] = 'B';

            if (s2[i] == 'G')
                s2[i] = 'B';
        }

        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}