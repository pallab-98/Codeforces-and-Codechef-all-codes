#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long num;
    cin >> num;
    while (num > 1)
    {
        cout << num << " ";
        if (num % 2 == 0)
            num /= 2;
        else
            num = 3 * num + 1;
    }
    cout << 1 << endl;

    return 0;
}