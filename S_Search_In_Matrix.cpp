#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int ara[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ara[i][j];

    int key;
    cin >> key;
    bool value = false;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (ara[i][j] == key)
                value = true;

    if (value)
        cout << "will not take number\n";
    else
        cout << "will take number\n";

    return 0;
}