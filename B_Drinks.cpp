#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double value, sum = 0;

    int caseTest;
    cin >> caseTest;

    value = caseTest;

    while (caseTest--)
    {
        double x;
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(12) << sum / value << endl;

    return 0;
}