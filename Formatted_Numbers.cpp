#include <bits/stdc++.h>
using namespace std;

int main()
{
    string stri;
    cin >> stri;
    int n = stri.size();

    for (int i = 0; i < n; i++)
    {
        cout << stri[i];

        if ((n - i - 1) % 3 == 0 && i != n - 1)
        {
            cout << ",";
        }
    }

    return 0;
}