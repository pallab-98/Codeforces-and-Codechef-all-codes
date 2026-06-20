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

        string str;
        cin >> str;

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != str[(i + 1) % n])
                k++;
        }

        if (k == n)
            cout << n << endl;
        else
            cout << k + 1 << endl;
    }

    return 0;
}