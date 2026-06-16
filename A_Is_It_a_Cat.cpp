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

        string str, ans;
        cin >> str;

        for (int i = 0; i < len; i++)
            str[i] = tolower(str[i]);

        ans += str[0];

        for (int i = 1; i < len; i++)

            if (str[i] != str[i - 1])
                ans += str[i];

        if (ans == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}