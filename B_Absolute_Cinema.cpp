#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long sum = 0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            sum += max(a[i], b[i]);

            mx = max(mx, min(a[i], b[i]));
        }

        cout << sum + mx << endl;
    }
    return 0;
}