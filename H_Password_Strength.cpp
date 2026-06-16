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

        if (s.size() < 8)
        {
            cout << "Weak\n";
            continue;
        }

        bool low = false, up = false, dig = false, spec = false;

        for (char c : s)
        {
            if (islower(c))
                low = true;
            else if (isupper(c))
                up = true;
            else if (isdigit(c))
                dig = true;
            else
                spec = true;
        }

        if (low && up && dig && spec)
            cout << "Strong\n";
        else
            cout << "Medium\n";
    }

    return 0;
}