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
        int jar, candi, result = 0;
        cin >> jar >> candi;

        vector<int> ara(jar);
        for (int i = 0; i < jar; i++)
            cin >> ara[i];

        for (int i = 0; i < jar; i++)
            if (ara[i] % candi == 0)
                result = max(result, ara[i]);

        cout << result << endl;
    }

    return 0;
}