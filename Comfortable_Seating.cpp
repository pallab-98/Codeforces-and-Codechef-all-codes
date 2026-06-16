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
        int length, count = 0;
        cin >> length;
        vector<int> ara(length);

        for (int i = 0; i < length; i++)
            cin >> ara[i];

        sort(ara.begin(), ara.end());
        int min = ara[0];

        for (int x : ara)
            if (x == min)
                count++;

        if (count >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}