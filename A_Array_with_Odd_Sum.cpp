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
        int len, even = 0, odd = 0;
        long long sum = 0;
        cin >> len;

        for (int i = 0; i < len; i++)
        {
            int value;
            cin >> value;
            sum += value;

            if (value % 2)
                odd++;
            else
                even++;
        }
        if (sum % 2)
            cout << "YES" << endl;

        else if (odd > 0 && even > 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}