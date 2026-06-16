#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase, worthPoint, passpoint;
    cin >> testCase;
    while (testCase--)
    {
        cin >> worthPoint >> passpoint;
        cout << worthPoint / 10 * passpoint << endl;
    }

    return 0;
}