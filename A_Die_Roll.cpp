#include <bits/stdc++.h>
#include <numeric> // gcd এর জন্য

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int M = max(Y, W);
    int favorable = 6 - M + 1;

    int g = __gcd(favorable, 6); // or std::gcd

    cout << favorable / g << "/" << 6 / g << '\n';

    return 0;
}