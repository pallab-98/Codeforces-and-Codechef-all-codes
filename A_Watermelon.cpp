#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int x;
    cin >> x;
    if (x % 2 == 0 && x > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
