#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, b, d;
    cin >> n >> b >> d;

    int x;
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x > b)
            continue;

        sum += x;

        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }

    cout << count;
    return 0;
}