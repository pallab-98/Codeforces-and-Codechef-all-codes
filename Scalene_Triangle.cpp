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
        if (a != b && a != c && b != c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
