#include <bits/stdc++.h>
using namespace std;

int fib(int N)
{
    if (N <= 1)
        return N;
    else
        return fib(N - 1) + fib(N - 2);
}

int main()
{
    int N;
    if (!(cin >> N) || !(N >= 1 && N <= 50))
        return 0;
    cout << fib(N);

    return 0;
}