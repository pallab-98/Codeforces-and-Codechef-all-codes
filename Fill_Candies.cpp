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
        int n, k, m;
        cin >> n >> k >> m;
        if ((n % (k * m)) != 0)
            cout << n / (k * m) + 1 << endl;
        else
            cout << n / (k * m) << endl;
    }
    return 0;
}