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
        int num,gcd = 0;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int a,value;
            cin >> a;
            value = 100 / a;
            gcd = __gcd(gcd, value);
        }

        if (gcd == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}