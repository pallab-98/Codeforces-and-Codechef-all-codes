#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num, caseTest;
    cin >> num;
    caseTest = 1;
    while (caseTest <= num)
    {

        if (num % caseTest == 0)
            cout << caseTest << endl;
        caseTest++;
    }
    return 0;
}