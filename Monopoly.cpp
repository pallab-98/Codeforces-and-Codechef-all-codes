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
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        /* if(P > Q+R+S || Q > P+R+S || R > P+Q+S || S > P+Q+R)
        cout<<"YES\n"; */
        int sum = A + B + C + D;
        if(A > sum - A || B > sum - B || C > sum - C || D > sum - D)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}