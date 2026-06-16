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
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);

        if (a[i] < 1 || a[i] > n)
        { // 1 to n এর বাইরে
            cout << "NO\n";
            return 0;
        }
    }
    if ((int)s.size() == n)
        cout << "YES\n"; // সব number distinct
    else
        cout << "NO\n"; // duplicate আছে
}