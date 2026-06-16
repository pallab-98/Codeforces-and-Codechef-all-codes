#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<string, int> freq;
    string word;

    while (cin >> word)
    {
        freq[word]++;
    }

    int maxFreq = 0;
    string ans = "";

    for (auto &p : freq)
    {
        string w = p.first;
        int f = p.second;

        if (f > maxFreq)
        {
            maxFreq = f;
            ans = w;
        }
        else if (f == maxFreq)
        {
            ans = min(ans, w);
        }
    }

    cout << ans << endl;

    return 0;
}