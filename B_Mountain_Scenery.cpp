#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> r(2 * n + 1);
    
    for (int i = 0; i < 2 * n + 1; i++)
        cin >> r[i];

    vector<int> y = r;

    for (int i = 1; i < 2 * n && k > 0; i += 2)
    {
        if (r[i] > r[i - 1] && r[i] > r[i + 1])
        {
            y[i]--;
            k--;
        }
    }

    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << y[i] << " ";
    }
    return 0;
}