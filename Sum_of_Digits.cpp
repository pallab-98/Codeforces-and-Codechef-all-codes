#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    if (!(cin >> caseTest) || !(caseTest >= 1 && caseTest <= 1e3))
        return 0;

    while (caseTest--)
    {
        int N;
        cin >> N;

        int sum = 0;

        while (N > 0)
        {
            sum += N % 10;
            N /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}