#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        // remove leading zeros
        while (a.size() > 1 && a[0] == '0')
            a.erase(0, 1);
        while (b.size() > 1 && b[0] == '0')
            b.erase(0, 1);

        if (a.size() > b.size())
        {
            cout << "First\n";
        }
        else if (a.size() < b.size())
        {
            cout << "Second\n";
        }
        else
        {
            if (a > b)
                cout << "First\n";
            else if (a < b)
                cout << "Second\n";
            else
                cout << "Equal\n";
        }
    }
    return 0;
}