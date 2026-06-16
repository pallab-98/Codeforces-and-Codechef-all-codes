#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    vector<int> d(n);

    for (int i = 1; i < n; i++)
        cin >> d[i];

    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = a; i < b; i++)
        sum += d[i];

    cout << sum;

    return 0;
}