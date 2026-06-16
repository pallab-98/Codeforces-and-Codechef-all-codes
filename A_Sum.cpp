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
        int A, B, C;
        cin >> A >> B >> C;
        int sum = A + B + C;
        if (A == sum - A || B == sum - B || C == sum - C)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}