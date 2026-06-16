#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int different = min(a, b);
    int same = abs(a - b) / 2;

    cout << different << " " << same << endl;

    return 0;
}