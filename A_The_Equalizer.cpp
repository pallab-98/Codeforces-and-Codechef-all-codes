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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int sum = 0, mx = 0;
        bool value = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];

            mx = max(mx, a[i]);
            if (a[i] != k)
                value = false;
        }

        // Case 1: সব element k হলে
        if (value)
        {
            cout << "YES\n";
        }
        // Case 2: max element k এর চেয়ে বড়
        else if (mx > k)
        {
            if (sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        // Case 3: max element k এর সমান বা ছোট
        else
        {
            if (n % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}