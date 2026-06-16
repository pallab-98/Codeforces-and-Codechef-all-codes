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
        int num;
        cin >> num;
        if (num == 0)
            cout << 0;

        else
        {
            while (num > 0)
            {
                cout << num % 10 << " ";
                num /= 10;
            }
        }
        cout << '\n';
    }
    return 0;
}