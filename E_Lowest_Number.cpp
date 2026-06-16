#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, i = 0;
    cin >> n;
    vector<int> s;

    while (i < n)
    {

        int x;
        cin >> x;
        s.push_back(x);
        i++;
    }
    int value = s[0], index = 1, j = 0;
    for (j = 0; j < n; j++)
    {
        if (value > s[j])
        {
            value = s[j];
            index = j + 1;
        }
    }
    cout << value << " " << index << endl;
    return 0;
}