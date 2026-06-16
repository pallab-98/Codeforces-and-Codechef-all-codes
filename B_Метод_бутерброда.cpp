#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    s.pop_back();

    int n = s.size();
    vector<char> res(n);

    int left = 0, right = n - 1;
    int i = 0;

    while (left <= right)
    {
        if (i < n)
            res[left++] = s[i++];
        if (i < n)
            res[right--] = s[i++];
    }

    for (char c : res)
        cout << c;
    cout << "\n";
    return 0;
}