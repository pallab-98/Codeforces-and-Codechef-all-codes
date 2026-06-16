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
        int pulp, pages = 1000;
        cin >> pulp;
        
        pages *= pulp;
        cout << pages / 100 << endl;
    }
    return 0;
}