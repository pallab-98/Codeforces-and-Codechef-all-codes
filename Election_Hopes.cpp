#include <bits/stdc++.h>
using namespace std;
int main()
{

    int chef, chefu;
    if (!(cin >> chef >> chefu))
    {
        return 0;
    }
    else if (chef >= (chefu *= 2))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}