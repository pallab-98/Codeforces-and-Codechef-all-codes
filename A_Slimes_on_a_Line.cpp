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

        vector<int> ara(loop);

        for (int i = 0; i < loop; i++)
            cin >> ara[i];

        sort(ara.begin(), ara.end());

        cout << (ara[loop - 1] - ara[0] +1) / 2 << endl;
    }
    return 0;
}