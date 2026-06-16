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
        int ind, start, result, low, high;
        cin >> ind >> start;
        
        int ara[ind];
        for (int i = 0; i < ind; i++)
            cin >> ara[i];

        low = ara[0], high = ara[ind - 1];

        if (abs(start - low) < abs(start - high))
            result = abs(start - low) + (high - low);

        else
            result = abs(start - high) + (high - low);

        cout << result << endl;
    }

    return 0;
}