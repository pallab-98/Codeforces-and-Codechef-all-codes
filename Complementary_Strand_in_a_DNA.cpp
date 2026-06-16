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
        int n, i = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int c : s)
        {
            if (c == 'A')
                cout << 'T';
            else if (c == 'T')
                cout << 'A';
            else if (c == 'C')
                cout << 'G';
            else if (c == 'G')
                cout << 'C';
        }
        cout << endl;
    }
    return 0;
}