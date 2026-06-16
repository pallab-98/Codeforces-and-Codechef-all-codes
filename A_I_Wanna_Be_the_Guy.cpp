#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int totalLevel, first, second, level;
    set<int> serial;

    cin >> totalLevel >> first;

    while (first--)
        cin >> level, serial.insert(level);

    cin >> second;
    while (second--)
        cin >> level, serial.insert(level);

    if (serial.size() == totalLevel)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";

    return 0;
}