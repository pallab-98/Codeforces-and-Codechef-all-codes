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
        int num;
        cin >> num;
        int remain = num % 3;
        if (remain == 1)
            cout << "HUGE\n";
        else if (remain == 2)
            cout << "SMALL\n";
        else
            cout << "NORMAL\n"; // 0 and 3 mormal;
    }
    return 0;
}