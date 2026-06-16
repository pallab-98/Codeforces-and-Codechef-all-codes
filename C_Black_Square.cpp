#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a[5];
    cin >> a[1] >> a[2] >> a[3] >> a[4];

    string s;
    cin >> s;

    long long total = 0;

    for (char c : s)
    {
        int idx = c - '0';
        total += a[idx];
    }

    cout << total << "\n";

    return 0;
}