#include <iostream>
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

        int current = 1;
        int ans = 0;

        for (char c : s)
        {
            int digit = c - '0';

            if (digit == 0)
                digit = 10;

            ans += abs(digit - current);
            ans += 1;

            current = digit;
        }

        cout << ans << endl;
    }

    return 0;
}