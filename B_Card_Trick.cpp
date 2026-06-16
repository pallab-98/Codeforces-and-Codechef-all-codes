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
        int len;
        cin >> len;

        vector<int> a(len);
        for (int i = 0; i < len; i++)
            cin >> a[i];

        int m;
        cin >> m;

        long long cur = 0;

        while (m--)
        {
            long long b;
            cin >> b;
            cur = (cur + b) % len;
        }

        cout << a[cur] << endl;
    }
    return 0;
}