#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long H, M, S, RS;
    cin >> S;
    H = S / 3600;
    S = S % 3600;
    M = S / 60;
    RS = S % 60;
    cout << H << ":" << M << ":" << RS << endl;

    return 0;
}