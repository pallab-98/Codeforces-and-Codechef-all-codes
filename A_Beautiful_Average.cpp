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

        int loop;
        cin >> loop;

        int mx = 0;

        for (int i = 0; i < loop; i++)
        {
            int x;
            cin >> x;

            mx = max(mx, x);
        }

        cout << mx << endl;
    }
    return 0;
}