#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string st;
    cin >> st;

    vector<int> ara(st.size());

    int j = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] != '+')
        {
            ara[j] = st[i] - '0';
            j++;
        }
    }

    sort(ara.begin(), ara.begin() + j);

    for (int i = 0; i < j; i++)
    {
        cout << ara[i];

        if (i < j - 1)
            cout << '+';
    }

    return 0;
}