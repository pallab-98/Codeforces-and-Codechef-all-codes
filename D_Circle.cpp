#include <bits/stdc++.h>
using namespace std;
int main()
{
    double R;
    cin >> R;
    double pi = acos(-1);
    cout << fixed << setprecision(6) << pi * pow(R, 2) << " " << 2 * pi * R << endl;

    return 0;
}