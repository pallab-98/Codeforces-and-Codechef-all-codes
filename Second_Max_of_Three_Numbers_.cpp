#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int high = max(a, max(b, c));

        int low = min(a, min(b, c));

        if (high != a && low != a)
            cout << a << endl;
            
        else if (high != b && low != b)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}
