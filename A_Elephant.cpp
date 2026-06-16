#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x;
    cin >> x;

    int steps = x / 5;
    if (x % 5 != 0)
        steps++;
    cout << steps << endl;

    return 0;
}