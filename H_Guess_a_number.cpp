#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long low = -2000000000;
    long long high = 2000000000;

    while (n--)
    {
        string sign, ans;
        long long x;
        cin >> sign >> x >> ans;

        if (ans == "Y")
        {
            if (sign == ">") low = max(low, x + 1);
            else if (sign == ">=") low = max(low, x);
            else if (sign == "<") high = min(high, x - 1);
            else if (sign == "<=") high = min(high, x);
        }
        else
        {
            if (sign == ">") high = min(high, x);
            else if (sign == ">=") high = min(high, x - 1);
            else if (sign == "<") low = max(low, x);
            else if (sign == "<=") low = max(low, x + 1);
        }
    }

    if (low <= high)
        cout << low << endl;
    else
        cout << "Impossible" << endl;

    return 0;
}