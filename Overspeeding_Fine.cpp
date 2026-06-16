#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;
    while (caseTime--)
    {
        int speed;
        cin >> speed;
        if (speed > 70 && speed <= 100)
            cout << 500 << endl;
        else if (speed > 100)
            cout << 2000 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}