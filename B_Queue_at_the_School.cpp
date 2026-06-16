#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, caseTest;
    cin >> n >> caseTest;

    string s;
    cin >> s;

    while (caseTest--)
    {
        for (int i = 0; i < n - 1; i++)
        {

            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;
    return 0;
}
