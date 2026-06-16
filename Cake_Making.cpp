#include <bits/stdc++.h>
using namespace std;
int main()
{
    int colorA, colorB;
    if (!(cin >> colorA >> colorB) || !(colorA >= 1 && colorA <= 100 && colorB >= 1 && colorB <= 100))
        return 0;
    cout << (colorA * colorB) - min(colorA, colorB);

    return 0;
}