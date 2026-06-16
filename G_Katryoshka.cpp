#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k, x, y;
    cin >> n >> m >> k;

    long long x = min(n, min(m, k)); // 1 eye + 1 mouth + 1 body
    n -= x;                          // eyes কমাতে হবে
    k -= x;                          // bodies কমাতে হবে
    // m -= x; --> এটা আর দরকার নেই

    long long y = min(n / 2, k); // 2 eyes + 1 body

    cout << x + y << endl;

    return 0;
}