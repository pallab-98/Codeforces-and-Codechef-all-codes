#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, caseTest;
    cin >> n >> caseTest;

    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];

    sort(ara, ara + n);

    while (caseTest--)
    {
        int key;
        cin >> key;

        int low = 0, high = n - 1;
        bool value = false;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (ara[mid] == key)
            {
                cout << "found\n";
                value = true;
                break;
            }
            else if (ara[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (!value)
            cout << "not found\n";
    }

    return 0;
}