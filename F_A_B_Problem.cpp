#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long A, B;
    cin >> A >> B;
    cout << A / B << " " << A % B << " ";
    cout << fixed << setprecision(5) << (double)A / B;

    return 0;
}