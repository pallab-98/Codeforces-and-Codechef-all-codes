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
        int x;
        cin >> x;
        
        if (((x * 0.10)) > 100.0)
            cout << x * 0.10 << endl;
        else
            cout << 100 << endl;
    }
    return 0;
}