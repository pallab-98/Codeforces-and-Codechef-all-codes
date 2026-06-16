#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.141592653;
    double p;

    cin >> p;

    p *= p;

    cout << fixed << setprecision(9) << p * pi << endl;

    return 0;
}