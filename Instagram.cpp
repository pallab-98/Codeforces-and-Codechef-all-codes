#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int x, y;
        cin >> x >> y;

        if(y*10<x)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}