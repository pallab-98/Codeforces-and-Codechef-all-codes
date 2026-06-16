#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int have, find;
    cin >> have >> find;

    if (have * 2 <= find)
        cout << "double it\n";
    else
        cout << "take it\n";

    return 0;
}