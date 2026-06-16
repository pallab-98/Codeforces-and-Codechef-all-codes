#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if (a1 > b1)
    {
        cout << "Alice";
    }
    else if (a1 < b1)
    {
        cout << "Bob";
    }
    else
    {
        if (a2 >= b2)
            cout << "Alice";
        else
            cout << "Bob";
    }

    return 0;
}