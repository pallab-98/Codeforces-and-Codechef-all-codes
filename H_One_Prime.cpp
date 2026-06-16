#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    if (num <= 1)
    {
        cout << "NO\n";
        return 0;
    }

    bool value = false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            value = true;
            break;
        }
    }

    if (value)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}