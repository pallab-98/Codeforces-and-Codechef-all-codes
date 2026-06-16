#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        long long left, right;
        cin >> left >> right;
        
        if (left > right)
            swap(left, right);

        long long sumLeft = ((left - 1) * left) / 2;
        long long sumRight = (right * (right + 1)) / 2;

        long long sum = sumRight - sumLeft;

        cout << sum << endl;
    }

    return 0;
}
