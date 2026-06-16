#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int index;
    cin >> index;
    vector<int> a(index);

    for (int i = 0; i < index; i++)
        cin >> a[i];

    int keyvalue;
    cin >> keyvalue;

    bool key = true;

    for (int i = 0; i < index; i++)
    {
        if (a[i] == keyvalue)
        {
            cout << i << endl;
            key = false;
            break;
        }
    }
    if (key)
        cout << -1 << endl;
    return 0;
}