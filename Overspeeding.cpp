#include <bits/stdc++.h>
using namespace std;
int main()
{
    int speed;
    if (!(cin >> speed) || !(speed >= 1 && speed <= 50))
        return 0;
    if (speed > 40 && speed <= 550)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}