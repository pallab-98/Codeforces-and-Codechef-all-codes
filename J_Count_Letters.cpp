#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s)
        freq[c - 'a']++;

    for (int i = 0; i < 26; i++)
        if (freq[i] > 0)
            cout << char(i + 'a') << " : " << freq[i] << "\n";

    return 0;
}