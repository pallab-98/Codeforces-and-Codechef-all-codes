#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int n, keyvalue = 67;
        bool foundkey = 0;

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int found : arr)
        {

            if (found == keyvalue)
            {
                foundkey = 1;
                break;
            }
        }

        if (foundkey)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}