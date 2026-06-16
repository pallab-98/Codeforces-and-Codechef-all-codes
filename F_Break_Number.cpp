#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    long long temp = 0;

    while (caseTest--)
    {
        long long num;
        cin >> num;

        int count = 0;

        while (num % 2 == 0)
        {
            num /= 2;
            count++;
        }

        temp = max(temp, (long long)count);
    }

    cout << temp << "\n";

    return 0;
}