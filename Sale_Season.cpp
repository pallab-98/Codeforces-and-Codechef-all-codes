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
        int buy;
        cin >> buy;
        
        if (buy <= 100)
            cout << buy << endl;
        else if (buy > 100 && buy <= 1000)
            cout << buy - 25 << endl;
        else if (buy > 1000 && buy <= 5000)
            cout << buy - 100 << endl;
        else
            cout << buy - 500 << endl;
    }
    return 0;
}
