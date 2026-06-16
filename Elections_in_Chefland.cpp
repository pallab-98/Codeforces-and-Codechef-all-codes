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
        int loop, year, count = 0;
        cin >> loop >> year;

        while (loop--)
        {
            int x;
            cin >> x;

            if (x >= year)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}