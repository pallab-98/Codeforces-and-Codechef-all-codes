#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B;
    cin >> A >> B;
    if (A < B)
        cout << A + B << endl;
    else if (A > B)
        cout << A - B << endl;
    else
        cout << -1 << endl;

    return 0;
}
