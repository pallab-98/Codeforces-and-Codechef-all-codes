#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, cycle[] = {8, 4, 2, 6}, totalLength = 4;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    cout << cycle[(n-1) % totalLength] << endl;

    return 0;
}