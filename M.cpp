#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num, a, b, c;
    cin >> num;
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;

    cout << 111 * (a + b + c) << endl;

    return 0;
}