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
        int n;
        cin >> n;

        vector<int> res;
        res.push_back(1);

        for (int i = 2; i <= n; i++)
        {
            int carry = 0;

            for (int j = 0; j < res.size(); j++)
            {
                int val = res[j] * i + carry;
                res[j] = val % 10;
                carry = val / 10;
            }

            while (carry)
            {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }

        for (int i = res.size() - 1; i >= 0; i--)
            cout << res[i];

        cout << endl;
    }
    return 0;
}