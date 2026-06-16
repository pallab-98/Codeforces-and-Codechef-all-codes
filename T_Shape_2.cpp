#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {

        for (int spc = 1; spc <= n - row; spc++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}