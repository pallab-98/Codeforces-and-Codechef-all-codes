#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int key;
    cin >> key;

    bool ok = false;

    for (int i = 1; i <= 500; i++)
    {
        int triangular = (i * (i + 1)) / 2;

        if (triangular == key)
        {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}