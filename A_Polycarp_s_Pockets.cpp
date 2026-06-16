#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int ans = 0;

    for (int i = 1; i <= 100; i++)
        ans = max(ans, freq[i]);

    cout << ans << endl;

    return 0;
}