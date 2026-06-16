#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int note;
    if (!(cin >> note) || !(note >= 1 && note <= 10e1))
        return 0;
    cout << note * 2000 / 500 << endl;

    return 0;
}