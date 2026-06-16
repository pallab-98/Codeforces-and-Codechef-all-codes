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
        int len, value;
        cin >> len >> value;

        string str;
        cin >> str;

        bool ok = true;

        for (int i = 0; i < value; i++)
        {
            int ones = 0;

            for (int j = i; j < len; j += value)
                ones += str[j] - '0';

            if (ones % 2)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}