#include <iostream>
#include <string>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        string S, T;
        cin >> S >> T;

        string ans = "";
        int mx = max(S.size(), T.size());

        for (int i = 0; i < mx; i++)
        {
            if (i < S.size())
                ans += S[i];

            if (i < T.size())
                ans += T[i];
        }

        cout << ans << endl;
    }

    return 0;
}