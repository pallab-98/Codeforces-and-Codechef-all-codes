#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int expected, finally;
    cin >> expected >> finally;
    cout << expected * 100 + (finally - expected) * 150 << endl;

    return 0;
}
