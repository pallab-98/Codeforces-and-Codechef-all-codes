#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    long long fab1 = 0, fab2 = 1;

    if (num >= 1)
        cout << fab1 << " ";
    if (num >= 2)
        cout << fab2 << " ";

    for (int i = 3; i <= num; i++)
    {
        long long result = fab1 + fab2;
        cout << result << " ";
        fab1 = fab2;
        fab2 = result;
    }
    return 0;
}
