#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red, blue;
    if (!(cin >> red >> blue) || !(red >= 1 && red <= 10 && blue >= 1 && blue <= 10))
        return 0;
    int green = min(red, blue);

    red -= green;
    blue -= green;

    cout << (green * 5) + (red * 1) + (blue * 2) << endl;

    return 0;
}