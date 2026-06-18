#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    string target = "codeforces";

    while (caseTest--)
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string str;
        cin >> str;

        int cnt = 0;
        for (int i = 0; i < 10; i++)

            if (str[i] != target[i])
                cnt++;

        cout << cnt << endl;
    }

    return 0;
}