#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        string a, b;
        cin >> a >> b;

        swap(a[0], b[0]);

        cout << a << " " << b << endl;
    }

    return 0;
}