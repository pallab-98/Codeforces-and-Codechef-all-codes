#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int sleep = 0;
        int awakeUntil = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                awakeUntil = i + k;

            if (i > awakeUntil)
                sleep++;
        }

        cout << sleep << endl;
    }
    return 0;
}