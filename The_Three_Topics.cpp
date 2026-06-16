#include <bits/stdc++.h>
using namespace std;
int main()
{

    int A, B, C, x;
    cin >> A >> B >> C >> x;

    int count = 0;
    count = (A != 0) + (B != 0) + (C != 0);

    if (count >= x)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}