#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    int j = 0; // pointer for B

    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[j])
        {
            j++;
        }
        if (j == m)
            break; // all matched
    }

    if (j == m)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}