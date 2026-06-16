#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    if ((A * B * C) > pow(X, 3))
        cout << "Cuboid" << endl;
    else if ((A * B * C) < pow(X, 3))
        cout << "Cube" << endl;
    else
        cout << "Equal" << endl;

    return 0;
}