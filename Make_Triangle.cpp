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
        int x, y, z, hivalue, value;
        cin >> x >> y >> z;

        hivalue = max({x, y, z});

        value = (x + y + z) - hivalue;

        if (hivalue >= value)
            cout << hivalue - value + 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}