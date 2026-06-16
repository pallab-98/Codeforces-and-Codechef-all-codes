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
        int time;
        cin >> time;

        if (time + 3 <= 10)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
