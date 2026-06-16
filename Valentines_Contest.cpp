#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    N=abs(N);

    if (N > 120 && N <= 123)
        cout << "Likely" << endl;
    else
        cout << "Unlikely" << endl;

    return 0;
}