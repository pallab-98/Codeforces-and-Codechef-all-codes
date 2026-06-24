#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        long long arr[3] = {x, y, z};
        sort(arr, arr + 3);

        if (arr[1] != arr[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        }
    }

    return 0;
}