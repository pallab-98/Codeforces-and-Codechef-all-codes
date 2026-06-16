#include <bits/stdc++.h>
using namespace std;

int isCute(string &s, int l, int r)
{
    int len = r - l + 1;

    // must be odd length
    if (len % 2 == 0) return 0;

    for (int i = l; i <= r; i++)
    {
        int pos = i - l; // local index

        if (pos % 2 == 0)
        {
            // odd position (1st, 3rd, 5th...) → u or o
            if (!(s[i] == 'u' || s[i] == 'o'))
                return 0;
        }
        else
        {
            // even position → w
            if (s[i] != 'w')
                return 0;
        }
    }

    return len;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string s;
        cin >> s;

        int maxLen = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                int len = isCute(s, i, j);
                maxLen = max(maxLen, len);
            }
        }

        cout << maxLen << "\n";
    }

    return 0;
}