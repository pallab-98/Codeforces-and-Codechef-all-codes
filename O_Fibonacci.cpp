#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    if (num == 1)
        cout << 0 << endl;

    else if (num == 2)
        cout << 1 << endl;
    else
    {
        long long fib1 = 0, fib2 = 1;

        for (int i = 3; i <= num; i++)
        {
            long long result = fib1 + fib2;
            fib1 = fib2;
            fib2 = result;
        }
        cout << fib2 << endl;
    }

    return 0;
}