#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int len;
    cin >> len;

    string str;
    cin >> str;

    int left, right;
    left = right = 0;

    for (char c : str)
    {
        if (c == 'L')
            left++;
        else
            right++;
    }
    cout << left + right + 1 << endl;

    return 0;
}