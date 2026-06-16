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

        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool ok = true;

                for (int k = i; k < j; k++)
                {
                    if (ara[k] > ara[k + 1])
                    {
                        ok = false;
                    }
                }

                if (ok)
                    count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}