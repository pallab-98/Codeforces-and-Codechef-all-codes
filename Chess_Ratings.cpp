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
        int num1, num2, diffrent, value;
        cin >> num1 >> num2;
        diffrent = num2 - num1;
        if (diffrent <= 0)
            cout << 0 << endl;
        else
        {
            value = (diffrent + 7) / 8;
            cout << value << endl;
        }
    }
    return 0;
}