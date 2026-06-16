#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, key;
    cin >> a;
    cin >> key;
    int ara[a];

    for (int i = 0; i < a; i++)
    {
        cin >> ara[i];
    }

    bool found = false;

    for (int value : ara)
    {
        if (key == value)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
