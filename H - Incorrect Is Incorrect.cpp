#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C;
    char sign, equal;
    cin >> A >> sign >> B >> equal >> C;

    int total = A + B + C;

    if (total % 4 != 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }

    int D = total / 2;
    A = B = D / 2;

    cout << A << "+" << B << "=" << D << endl;

    return 0;
}