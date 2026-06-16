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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        cout << max(a, b) + max(c, d) << endl;
    }
    return 0;
}