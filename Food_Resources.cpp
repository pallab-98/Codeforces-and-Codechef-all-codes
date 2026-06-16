#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int low = 0, high = *max_element(A.begin(), A.end());
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2; // days

        long long people = 0;

        if (mid > 0)
        {
            for (int i = 0; i < N; i++)
            {
                people += A[i] / mid;
            }
        }

        if (people >= M)
        {
            ans = mid;
            low = mid + 1; // try more days
        }
        else
        {
            high = mid - 1; // reduce days
        }
    }

    cout << ans << "\n";
    return 0;
}