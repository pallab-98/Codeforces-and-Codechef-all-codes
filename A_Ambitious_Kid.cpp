#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    long long ans = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;
        ans = min(ans, llabs(x));
    }

    cout << ans << endl;
    return 0;
}