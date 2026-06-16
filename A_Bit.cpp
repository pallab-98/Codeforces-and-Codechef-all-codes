#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    int x = 0;

    while (caseTest--)
    {
        string sign;
        cin >> sign;

        if (sign[0] == '+' || sign[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}
/*  if (sign.find("++") != string::npos)
        {
            x++;
        }
        else
            x--; */