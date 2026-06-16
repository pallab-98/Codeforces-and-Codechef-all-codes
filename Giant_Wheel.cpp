#include <bits/stdc++.h>
using namespace std;
int main()
{
    int centimeter;
    if (!(cin >> centimeter) || !(centimeter >= 1 && centimeter <= 100))
        return 0;

    if (centimeter >= 60)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}