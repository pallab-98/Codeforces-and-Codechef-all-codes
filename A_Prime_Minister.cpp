#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int alice = a[0];
    int total = accumulate(a.begin(), a.end(), 0);

    vector<int> idx;
    idx.push_back(1);

    int sum = alice;

    for (int i = 1; i < n; i++)
    {
        if (a[i] * 2 <= alice)
        {
            idx.push_back(i + 1);
            sum += a[i];
        }
    }

    if (sum > total / 2)
    {
        cout << idx.size() << "\n";
        for (auto x : idx)
            cout << x << " ";
    }
    else
        cout << 0 << "\n";

    return 0;
}