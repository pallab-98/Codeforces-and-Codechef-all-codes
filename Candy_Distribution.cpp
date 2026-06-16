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
        int n, m;
        float value;
        cin >> n >> m;

        if (n % 2 == 0)
        {
            value = (float)n / m;

            if (fmod(value, 2.0) == 0)
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}