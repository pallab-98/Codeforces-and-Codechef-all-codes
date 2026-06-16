#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += s[i] - '0';

    cout << sum << endl;
    return 0;
}
