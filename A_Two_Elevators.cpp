#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int value1, value2;
        
        value1 = abs(a - 1);
        value2 = abs(b - c) + abs(c - 1);

        if (value1 < value2)
            cout << 1 << endl;

        else if (value2 < value1)
            cout << 2 << endl;

        else if (value1 == value2)
            cout << 3 << endl;
    }
    return 0;
}