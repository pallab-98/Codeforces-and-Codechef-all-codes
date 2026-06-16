#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int temparature;
        cin >> temparature;

        if (temparature > 20)
            cout << "HOT\n";
        else
            cout << "COLD\n";
    }
    return 0;
}