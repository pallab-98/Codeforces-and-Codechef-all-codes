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

    set<int> seen;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {

        if (seen.count(a[i]) == 0)
        {
            ans.push_back(a[i]);
            seen.insert(a[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int x : ans)
        cout << x << " ";

    return 0;
}