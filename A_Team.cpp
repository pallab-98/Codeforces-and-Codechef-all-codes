#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    int count = 0;

    while (caseTest--)
    {
        int f1, f2, f3;
        cin >> f1 >> f2 >> f3;

        if ((f1 & f2) || (f2 & f3) || (f3 & f1))
            count++;
    }

    cout << count << endl;

    return 0;
}