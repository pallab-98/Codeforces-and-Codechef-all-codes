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
        int num1, num2, second, richsecond;
        cin >> num1 >> num2 >> second;

        if (num1 <= num2)
        {
            richsecond = num2 / num1;
            if (second > richsecond)
                cout << second - richsecond << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}