#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest, divisor, count = 0;
    cin >> caseTest >> divisor;

    while (caseTest--)
    {
        int dividend;
        cin >> dividend;

        if (dividend % divisor == 0)
            count++;
    }
    cout << count << endl;
}