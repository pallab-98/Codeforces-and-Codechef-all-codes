#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int index;
    cin >> index;

    string st;
    cin >> st;

    int count = 0;

    for (int i = 0; i < index - 1; i++)
        if (st[i] == st[i + 1])
            count++;
    cout << count << endl;

    return 0;
}