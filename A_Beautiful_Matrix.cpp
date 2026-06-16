#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int value;
    for (int row = 1; row <= 5; row++)
        for (int col = 1; col <= 5; col++)
        {
            cin >> value;
            if (value)
                cout << abs(row - 3) + abs(col - 3);
        }
    return 0;
}