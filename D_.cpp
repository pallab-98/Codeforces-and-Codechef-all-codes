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
        int n, count = 0;
        cin >> n;
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            if (ara[i] >= 1000)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}