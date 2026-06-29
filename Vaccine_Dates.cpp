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
        if (a >= b && a < c)
            cout << "Take second dose now" << endl;
        else if (a >= b && a > c)
            cout << "Too Late" << endl;
        else
            cout << "Too Early" << endl;
    }

    return 0;
}