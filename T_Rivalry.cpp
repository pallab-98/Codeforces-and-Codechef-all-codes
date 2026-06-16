#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R1, D1, R2, D2, A, B;
    cin >> R1 >> R2;
    cin >> D1 >> D2;
    A = (R1 + D1);
    B = (R2 + D2);
    if (A > B)
        cout << "Dominater\n";
    else
        cout << "Everule\n";

    return 0;
}