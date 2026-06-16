#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int casetest;
    cin >> casetest;
    while (casetest--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n - 1);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1; i++)
            b[i] = a[i] ^ a[i + 1];

        int x = n - 2;
        while (x--)
        {
            for (int i = 0; i < n - 1; i++)
                b[i] = b[i] ^ b[i + 1];
        }
        cout << b[0] << endl;
    }
    return 0;
}