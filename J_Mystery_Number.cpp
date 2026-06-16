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

        int i = 0;
        while (i < (int)s.size() && s[i] == '0')
            i++;

        string num = s.substr(i);

        if (num.empty())
            num = "0";

        int len = num.size();
        int sum = 0;
        int mx = 0;

        for (char c : num)
        {
            int d = c - '0';
            sum += d;
            mx = max(mx, d);
        }

        cout << len << " " << sum << " " << mx << "\n";
    }

    return 0;
}