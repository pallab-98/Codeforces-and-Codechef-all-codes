#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    if (!(cin >> x))
        return 0;
    else if (x >= 1 && x <= 18)
    {
        if (x >= 16 && x <= 18)
        {
            cout << "ADVITIYA" << endl;
        }
        else
        {
            cout << "WAITING FOR ADVITIYA" << endl;
        }
    }

    return 0;
}