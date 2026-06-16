#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    int total = 0;
    int height = 0;

    for (int i = 1;; i++)
    {
        int need = i * (i + 1) / 2;

        if (total + need > n)
            break;

        total += need;
        height++;
    }

    cout << height << endl;

    return 0;
}