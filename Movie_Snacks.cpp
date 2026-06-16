#include <bits/stdc++.h>
using namespace std;

int main()
{
    int popcone, drink, combo, value1, value2;
    cin >> popcone >> drink >> combo;
    value1 = (popcone * 2) + (drink * 3);
    value2 = (combo * 2) + drink;
    cout << min(value1, value2);

    return 0;
}