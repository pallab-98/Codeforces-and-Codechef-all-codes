#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b && a < c)
            cout << "Take second dose now\n";
        else if (a >= b && a > c)
            cout << "Too Late\n";
        else
            cout << "Too Early\n";
    }

    return 0;
}